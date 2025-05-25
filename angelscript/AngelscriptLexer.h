
// Generated from ./AngelscriptLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  AngelscriptLexer : public antlr4::Lexer {
public:
  enum {
    IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4, 
    UserDefinedLiteral = 5, Cast = 6, Import = 7, From = 8, Out = 9, Property = 10, 
    Ensure = 11, EnsureAlways = 12, Check = 13, Mixin = 14, Int = 15, Int8 = 16, 
    Int16 = 17, Int32 = 18, Int64 = 19, UInt = 20, UInt8 = 21, UInt16 = 22, 
    UInt32 = 23, UInt64 = 24, Float = 25, Double = 26, Bool = 27, Auto = 28, 
    Break = 29, Case = 30, Catch = 31, Char = 32, Class = 33, Const = 34, 
    Continue = 35, Default = 36, Do = 37, Else = 38, Enum = 39, Export = 40, 
    False_ = 41, Final = 42, For = 43, Goto = 44, If = 45, Namespace = 46, 
    Nullptr = 47, Operator = 48, Override = 49, Private = 50, Protected = 51, 
    Public = 52, Return = 53, Short = 54, Switch = 55, This = 56, True_ = 57, 
    Virtual = 58, Void = 59, While = 60, LeftParen = 61, RightParen = 62, 
    LeftBracket = 63, RightBracket = 64, LeftBrace = 65, RightBrace = 66, 
    Plus = 67, Minus = 68, Star = 69, Div = 70, Mod = 71, Xor = 72, And = 73, 
    Or = 74, Tilde = 75, Not = 76, Assign = 77, Less = 78, Greater = 79, 
    PlusAssign = 80, MinusAssign = 81, StarAssign = 82, DivAssign = 83, 
    ModAssign = 84, XorAssign = 85, AndAssign = 86, OrAssign = 87, LeftShiftAssign = 88, 
    RightShiftAssign = 89, Equal = 90, NotEqual = 91, LessEqual = 92, GreaterEqual = 93, 
    AndAnd = 94, OrOr = 95, PlusPlus = 96, MinusMinus = 97, Comma = 98, 
    Question = 99, Colon = 100, Doublecolon = 101, Semi = 102, Dot = 103, 
    Identifier = 104, DecimalLiteral = 105, OctalLiteral = 106, HexadecimalLiteral = 107, 
    BinaryLiteral = 108, Integersuffix = 109, UserDefinedIntegerLiteral = 110, 
    UserDefinedFloatingLiteral = 111, UserDefinedStringLiteral = 112, UserDefinedCharacterLiteral = 113, 
    Whitespace = 114, Newline = 115, BlockComment = 116, LineComment = 117, 
    PreprocessorBranchRemoval = 118, Preprocessor = 119
  };

  explicit AngelscriptLexer(antlr4::CharStream *input);

  ~AngelscriptLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

