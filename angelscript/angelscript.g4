/*
BSD License

Copyright (c) 2021, Tom Everett
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Neither the name of Tom Everett nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

grammar angelscript;

// Parser rules
script
    : (import_
      | enum_
      | typdef
      | class_
      | mixin_
      | interface_
      | funcdef
      | virtprop
      | var_
      | func_
      | namespace_
      | ';'
      )+ EOF
    ;

import_
    : 'import' type_ '&'? IDENTIFIER paramlist FUNCATTR 'from' STRING ';'
    ;

enum_
    : ('shared' | 'external')* 'enum' IDENTIFIER (
        ';'
      | '{' IDENTIFIER ('=' expr)? (',' IDENTIFIER ('=' expr)?)* '}'
      )
    ;

typdef
    : 'typedef' PRIMTYPE IDENTIFIER ';'
    ;

class_
    : ('shared' | 'abstract' | 'final' | 'external')* 'class' IDENTIFIER (
        ';'
      | (':' IDENTIFIER (',' IDENTIFIER)*)? '{' (virtprop | func_ | var_ | funcdef)* '}'
      )
    ;

mixin_
    : 'mixin' class_
    ;

interface_
    : ('external' | 'shared')* 'interface' IDENTIFIER (
        ';'
      | (':' IDENTIFIER (',' IDENTIFIER)*)? '{' (virtprop | intfmthd)* '}'
      )
    ;

funcdef
    : ('external' | 'shared')* 'funcdef' type_ '&'? IDENTIFIER paramlist ';'
    ;

virtprop
    : ('private' | 'protected')? type_ '&'? IDENTIFIER '{' (
        ('get' | 'set') 'const'? FUNCATTR (statblock | ';')
      )* '}'
    ;

var_
    : ('private' | 'protected')? type_ IDENTIFIER ('=' (initlist | expr) | arglist)?
      (',' IDENTIFIER ('=' (initlist | expr) | arglist)?)* ';'
    ;

func_
    : ('shared' | 'external')* ('private' | 'protected')? (type_ '&'? | '~')? IDENTIFIER paramlist 'const'? FUNCATTR? (
        ';'
      | statblock
      )
    ;

namespace_
    : 'namespace' IDENTIFIER '{' script '}'
    ;

intfmthd
    : type_ '&'? IDENTIFIER paramlist 'const'? ';'
    ;

statblock
    : '{' (var_ | statement)* '}'
    ;

paramlist
    : '(' (
        'void'
      | type_ typemod IDENTIFIER? ('=' expr)? (',' type_ typemod IDENTIFIER? ('=' expr)?)*
      )? ')'
    ;

typemod
    : ('&' ('in' | 'out' | 'inout')?)?
    ;

type_
    : 'const'? scope datatype ('<' type_ (',' type_)* '>')* ('[' ']' | '@' 'const'?)*
    ;

initlist
    : '{' (assign | initlist)? (',' (assign | initlist)?)* '}'
    ;

scope
    : '::'? (IDENTIFIER '::')* (IDENTIFIER ('<' type_ (',' type_)* '>')? '::')?
    ;

datatype
    : IDENTIFIER
    | PRIMTYPE
    | '?'
    | 'auto'
    ;

statement
    : if_
    | for_
    | while_
    | return_
    | statblock
    | break_
    | continue_
    | dowhile
    | switch_
    | exprstat
    | try_
    ;

switch_
    : 'switch' '(' assign ')' '{' case_* '}'
    ;

break_
    : 'break' ';'
    ;

for_
    : 'for' '(' (var_ | exprstat) exprstat (assign (',' assign)*)? ')' statement
    ;

while_
    : 'while' '(' assign ')' statement
    ;

dowhile
    : 'do' statement 'while' '(' assign ')' ';'
    ;

if_
    : 'if' '(' assign ')' statement ('else' statement)?
    ;

continue_
    : 'continue' ';'
    ;

exprstat
    : assign? ';'
    ;

try_
    : 'try' statblock 'catch' statblock
    ;

return_
    : 'return' condition? ';'
    ;

case_
    : ('case' expr | 'default') ':' statement*
    ;

expr
    : exprterm (exprop exprterm)*
    ;

exprterm
    : (type_ '=')? initlist
    | EXPRPREOP* exprvalue exprpostop*
    ;

exprvalue
    : constructcall
    | funccall
    | varaccess
    | cast
    | LITERAL
    | '(' assign ')'
    | lambda_
    ;

constructcall
    : type_ arglist
    ;

exprpostop
    : '.' (funccall | IDENTIFIER)
    | '[' (IDENTIFIER ':')? assign (',' IDENTIFIER? ':' assign)* ']'
    | arglist
    | '++'
    | '--'
    ;

cast
    : 'cast' '<' type_ '>' '(' assign ')'
    ;

lambda_
    : 'function' '(' ((type_ typemod)? IDENTIFIER (',' (type_ typemod)? IDENTIFIER)*)? ')' statblock
    ;

funccall
    : scope IDENTIFIER arglist
    ;

varaccess
    : scope IDENTIFIER
    ;

arglist
    : '(' (IDENTIFIER ':')? assign (',' (IDENTIFIER ':')? assign)* ')'
    ;

assign
    : condition (ASSIGNOP assign)?
    ;

condition
    : expr ('?' assign ':' assign)?
    ;

exprop
    : MATHOP | COMPOP | LOGICOP | BITOP
    ;

// Lexer rules
fragment DIGIT: [0-9];
fragment DIGIT_UNI: [\p{Nd}];
fragment EXPONENT: [eE] [+-]? DIGIT+;

NUMBER: DIGIT+ ('.' DIGIT+)? EXPONENT? | '.' DIGIT+ EXPONENT?;
BITS: ('0b' | '0o' | '0d' | '0x' | '0B' | '0O' | '0D' | '0X') [0-9a-zA-Z]+;
STRING: '"' (~["\r\n])* '"' | '\'' (~['\r\n])* '\'';
LITERAL: NUMBER | STRING | BITS | 'true' | 'false' | 'null';
fragment LETTER: [\p{L}_];
IDENTIFIER: LETTER (LETTER | DIGIT_UNI)*;
BITOP: '&' | '|' | '^' | '<<' | '>>' | '>>>';
MATHOP: '*' | '/' | '\'' | '**';
COMPOP: '==' | '!=' | '<' | '<=' | '>' | '>=' | 'is' | '!is';
LOGICOP: '&&' | '||' | '^^' | 'and' | 'or' | 'xor';
ASSIGNOP: '=' | '+=' | '-=' | '*=' | '/=' | '|=' | '&=' | '^=' | '%=' | '**=' | '<<=' | '>>=' | '>>>=';
PRIMTYPE: 'void' | 'int' | 'int8' | 'int16' | 'int32' | 'int64' | 'uint' | 'uint8' | 'uint16' | 'uint32' | 'uint64' | 'float' | 'double' | 'bool';
FUNCATTR: 'override' | 'final' | 'explicit' | 'property';
EXPRPREOP: '+' | '-' | '!' | '++' | '--' | '~' | '@';
COMMENT: '//' ~[\r\n]* -> skip;
WS: [ \t\r\n]+ -> skip;
