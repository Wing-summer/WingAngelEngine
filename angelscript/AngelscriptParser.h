
// Generated from ./AngelscriptParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  AngelscriptParser : public antlr4::Parser {
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

  enum {
    RuleScript = 0, RuleModuleImport = 1, RuleAsGeneric = 2, RuleSimpleTypeSpecifierList = 3, 
    RuleBooleanLiteral = 4, RulePrimaryExpression = 5, RuleIdExpression = 6, 
    RuleUnqualifiedId = 7, RuleQualifiedId = 8, RuleNestedNameSpecifier = 9, 
    RuleLambdaExpression = 10, RuleLambdaIntroducer = 11, RuleLambdaCapture = 12, 
    RuleCaptureDefault = 13, RuleCaptureList = 14, RuleCapture = 15, RuleSimpleCapture = 16, 
    RuleInitcapture = 17, RuleLambdaDeclarator = 18, RulePostfixExpression = 19, 
    RuleExpressionList = 20, RulePseudoDestructorName = 21, RuleUnaryExpression = 22, 
    RuleUnaryOperator = 23, RuleNewPlacement = 24, RuleNewInitializer_ = 25, 
    RuleCastExpression = 26, RuleMultiplicativeExpression = 27, RuleAdditiveExpression = 28, 
    RuleShiftExpression = 29, RuleShiftOperator = 30, RuleRelationalExpression = 31, 
    RuleEqualityExpression = 32, RuleAndExpression = 33, RuleExclusiveOrExpression = 34, 
    RuleInclusiveOrExpression = 35, RuleLogicalAndExpression = 36, RuleLogicalOrExpression = 37, 
    RuleConditionalExpression = 38, RuleAssignmentExpression = 39, RuleAssignmentOperator = 40, 
    RuleExpression = 41, RuleConstantExpression = 42, RuleStatement = 43, 
    RuleLabeledStatement = 44, RuleExpressionStatement = 45, RuleCompoundStatement = 46, 
    RuleStatementSeq = 47, RuleSelectionStatement = 48, RuleCondition = 49, 
    RuleIterationStatement = 50, RuleForInitStatement = 51, RuleForRangeDeclaration = 52, 
    RuleForRangeInitializer = 53, RuleJumpStatement = 54, RuleDeclarationStatement = 55, 
    RuleDeclarationseq = 56, RuleDeclaration = 57, RuleBlockDeclaration = 58, 
    RuleAliasDeclaration = 59, RuleSimpleDeclaration = 60, RuleEmptyDeclaration_ = 61, 
    RuleDeclSpecifier = 62, RuleDeclSpecifierSeq = 63, RuleFunctionSpecifier = 64, 
    RuleTypedefName = 65, RuleTypeSpecifier = 66, RuleTrailingTypeSpecifier = 67, 
    RuleTypeSpecifierSeq = 68, RuleTrailingTypeSpecifierSeq = 69, RuleSimpleTypeSpecifier = 70, 
    RuleAssertSpecifier = 71, RuleTheTypeName = 72, RuleDecltypeSpecifier = 73, 
    RuleElaboratedTypeSpecifier = 74, RuleEnumName = 75, RuleEnumSpecifier = 76, 
    RuleEnumHead = 77, RuleOpaqueEnumDeclaration = 78, RuleEnumkey = 79, 
    RuleEnumbase = 80, RuleEnumeratorList = 81, RuleEnumeratorDefinition = 82, 
    RuleEnumerator = 83, RuleNamespaceName = 84, RuleOriginalNamespaceName = 85, 
    RuleNamespaceDefinition = 86, RuleNamespaceAlias = 87, RuleNamespaceAliasDefinition = 88, 
    RuleQualifiednamespacespecifier = 89, RuleBalancedTokenSeq = 90, RuleBalancedtoken = 91, 
    RuleInitDeclaratorList = 92, RuleInitDeclarator = 93, RuleDeclarator = 94, 
    RuleDeclaratorDef = 95, RuleParametersAndQualifiers = 96, RuleRefqualifier = 97, 
    RuleDeclaratorid = 98, RuleTheTypeId = 99, RuleParameterDeclarationClause = 100, 
    RuleParameterDeclarationList = 101, RuleParameterDeclaration = 102, 
    RuleFunctionDefinition = 103, RuleFunctionBody = 104, RuleInitializer = 105, 
    RuleBraceOrEqualInitializer = 106, RuleInitializerClause = 107, RuleInitializerList = 108, 
    RuleBracedInitList = 109, RuleClassName = 110, RuleClassSpecifier = 111, 
    RuleClassHead = 112, RuleClassHeadName = 113, RuleClassVirtSpecifier = 114, 
    RuleMemberSpecification = 115, RuleMemberdeclaration = 116, RulePropertyDefinition = 117, 
    RuleMemberDeclaratorList = 118, RuleMemberDeclarator = 119, RulePostFuncSpecifierSeq = 120, 
    RuleVirtualSpecifier = 121, RuleBaseClause = 122, RuleBaseSpecifierList = 123, 
    RuleBaseSpecifier = 124, RuleClassOrDeclType = 125, RuleBaseTypeSpecifier = 126, 
    RuleAccessSpecifier = 127, RuleOperatorFunctionId = 128, RuleLiteralOperatorId = 129, 
    RuleTheOperator = 130, RuleLiteral = 131
  };

  explicit AngelscriptParser(antlr4::TokenStream *input);

  AngelscriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AngelscriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ScriptContext;
  class ModuleImportContext;
  class AsGenericContext;
  class SimpleTypeSpecifierListContext;
  class BooleanLiteralContext;
  class PrimaryExpressionContext;
  class IdExpressionContext;
  class UnqualifiedIdContext;
  class QualifiedIdContext;
  class NestedNameSpecifierContext;
  class LambdaExpressionContext;
  class LambdaIntroducerContext;
  class LambdaCaptureContext;
  class CaptureDefaultContext;
  class CaptureListContext;
  class CaptureContext;
  class SimpleCaptureContext;
  class InitcaptureContext;
  class LambdaDeclaratorContext;
  class PostfixExpressionContext;
  class ExpressionListContext;
  class PseudoDestructorNameContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class NewPlacementContext;
  class NewInitializer_Context;
  class CastExpressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class ShiftOperatorContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class ConditionalExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class StatementContext;
  class LabeledStatementContext;
  class ExpressionStatementContext;
  class CompoundStatementContext;
  class StatementSeqContext;
  class SelectionStatementContext;
  class ConditionContext;
  class IterationStatementContext;
  class ForInitStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class JumpStatementContext;
  class DeclarationStatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockDeclarationContext;
  class AliasDeclarationContext;
  class SimpleDeclarationContext;
  class EmptyDeclaration_Context;
  class DeclSpecifierContext;
  class DeclSpecifierSeqContext;
  class FunctionSpecifierContext;
  class TypedefNameContext;
  class TypeSpecifierContext;
  class TrailingTypeSpecifierContext;
  class TypeSpecifierSeqContext;
  class TrailingTypeSpecifierSeqContext;
  class SimpleTypeSpecifierContext;
  class AssertSpecifierContext;
  class TheTypeNameContext;
  class DecltypeSpecifierContext;
  class ElaboratedTypeSpecifierContext;
  class EnumNameContext;
  class EnumSpecifierContext;
  class EnumHeadContext;
  class OpaqueEnumDeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorListContext;
  class EnumeratorDefinitionContext;
  class EnumeratorContext;
  class NamespaceNameContext;
  class OriginalNamespaceNameContext;
  class NamespaceDefinitionContext;
  class NamespaceAliasContext;
  class NamespaceAliasDefinitionContext;
  class QualifiednamespacespecifierContext;
  class BalancedTokenSeqContext;
  class BalancedtokenContext;
  class InitDeclaratorListContext;
  class InitDeclaratorContext;
  class DeclaratorContext;
  class DeclaratorDefContext;
  class ParametersAndQualifiersContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class TheTypeIdContext;
  class ParameterDeclarationClauseContext;
  class ParameterDeclarationListContext;
  class ParameterDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionBodyContext;
  class InitializerContext;
  class BraceOrEqualInitializerContext;
  class InitializerClauseContext;
  class InitializerListContext;
  class BracedInitListContext;
  class ClassNameContext;
  class ClassSpecifierContext;
  class ClassHeadContext;
  class ClassHeadNameContext;
  class ClassVirtSpecifierContext;
  class MemberSpecificationContext;
  class MemberdeclarationContext;
  class PropertyDefinitionContext;
  class MemberDeclaratorListContext;
  class MemberDeclaratorContext;
  class PostFuncSpecifierSeqContext;
  class VirtualSpecifierContext;
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class ClassOrDeclTypeContext;
  class BaseTypeSpecifierContext;
  class AccessSpecifierContext;
  class OperatorFunctionIdContext;
  class LiteralOperatorIdContext;
  class TheOperatorContext;
  class LiteralContext; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScriptContext* script();

  class  ModuleImportContext : public antlr4::ParserRuleContext {
  public:
    ModuleImportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Semi();
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *StringLiteral();
    DeclSpecifierSeqContext *declSpecifierSeq();
    PostFuncSpecifierSeqContext *postFuncSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleImportContext* moduleImport();

  class  AsGenericContext : public antlr4::ParserRuleContext {
  public:
    AsGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    SimpleTypeSpecifierListContext *simpleTypeSpecifierList();
    antlr4::tree::TerminalNode *Greater();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsGenericContext* asGeneric();

  class  SimpleTypeSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierSeqContext *> declSpecifierSeq();
    DeclSpecifierSeqContext* declSpecifierSeq(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSpecifierListContext* simpleTypeSpecifierList();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *False_();
    antlr4::tree::TerminalNode *True_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();
    IdExpressionContext *idExpression();
    LambdaExpressionContext *lambdaExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();
    QualifiedIdContext *qualifiedId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdExpressionContext* idExpression();

  class  UnqualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    LiteralOperatorIdContext *literalOperatorId();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedIdContext* unqualifiedId();

  class  QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdContext* qualifiedId();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Doublecolon();
    TheTypeNameContext *theTypeName();
    NamespaceNameContext *namespaceName();
    DecltypeSpecifierContext *decltypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaIntroducerContext *lambdaIntroducer();
    CompoundStatementContext *compoundStatement();
    LambdaDeclaratorContext *lambdaDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaIntroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    LambdaCaptureContext *lambdaCapture();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaIntroducerContext* lambdaIntroducer();

  class  LambdaCaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureListContext *captureList();
    CaptureDefaultContext *captureDefault();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaCaptureContext* lambdaCapture();

  class  CaptureDefaultContext : public antlr4::ParserRuleContext {
  public:
    CaptureDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Assign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureDefaultContext* captureDefault();

  class  CaptureListContext : public antlr4::ParserRuleContext {
  public:
    CaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaptureContext *> capture();
    CaptureContext* capture(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureListContext* captureList();

  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleCaptureContext *simpleCapture();
    InitcaptureContext *initcapture();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimpleCaptureContext : public antlr4::ParserRuleContext {
  public:
    SimpleCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *This();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleCaptureContext* simpleCapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *And();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitcaptureContext* initcapture();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    AssertSpecifierContext *assertSpecifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    BracedInitListContext *bracedInitList();
    antlr4::tree::TerminalNode *Cast();
    antlr4::tree::TerminalNode *Less();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Greater();
    ExpressionContext *expression();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Dot();
    IdExpressionContext *idExpression();
    PseudoDestructorNameContext *pseudoDestructorName();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerListContext *initializerList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  PseudoDestructorNameContext : public antlr4::ParserRuleContext {
  public:
    PseudoDestructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    std::vector<TheTypeNameContext *> theTypeName();
    TheTypeNameContext* theTypeName(size_t i);
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Doublecolon();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudoDestructorNameContext* pseudoDestructorName();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryOperatorContext *unaryOperator();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Not();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  NewPlacementContext : public antlr4::ParserRuleContext {
  public:
    NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewPlacementContext* newPlacement();

  class  NewInitializer_Context : public antlr4::ParserRuleContext {
  public:
    NewInitializer_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewInitializer_Context* newInitializer_();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *Cast();
    antlr4::tree::TerminalNode *Less();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LeftParen();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CastExpressionContext *> castExpression();
    CastExpressionContext* castExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Star();
    antlr4::tree::TerminalNode* Star(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Div();
    antlr4::tree::TerminalNode* Div(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Mod();
    antlr4::tree::TerminalNode* Mod(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    std::vector<ShiftOperatorContext *> shiftOperator();
    ShiftOperatorContext* shiftOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LessEqual();
    antlr4::tree::TerminalNode* LessEqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GreaterEqual();
    antlr4::tree::TerminalNode* GreaterEqual(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Equal();
    antlr4::tree::TerminalNode* Equal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NotEqual();
    antlr4::tree::TerminalNode* NotEqual(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();

  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Xor();
    antlr4::tree::TerminalNode* Xor(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();

  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AndAnd();
    antlr4::tree::TerminalNode* AndAnd(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OrOr();
    antlr4::tree::TerminalNode* OrOr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *Question();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentExpressionContext *> assignmentExpression();
    AssignmentExpressionContext* assignmentExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    CompoundStatementContext *compoundStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Case();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Default();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementSeqContext *statementSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementSeqContext : public antlr4::ParserRuleContext {
  public:
    StatementSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementSeqContext* statementSeq();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *For();
    ForInitStatementContext *forInitStatement();
    ForRangeDeclarationContext *forRangeDeclaration();
    antlr4::tree::TerminalNode *Colon();
    ForRangeInitializerContext *forRangeInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    SimpleDeclarationContext *simpleDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitStatementContext* forInitStatement();

  class  ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleImportContext *moduleImport();
    BlockDeclarationContext *blockDeclaration();
    FunctionDefinitionContext *functionDefinition();
    NamespaceDefinitionContext *namespaceDefinition();
    EmptyDeclaration_Context *emptyDeclaration_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    NamespaceAliasDefinitionContext *namespaceAliasDefinition();
    AliasDeclarationContext *aliasDeclaration();
    OpaqueEnumDeclarationContext *opaqueEnumDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockDeclarationContext* blockDeclaration();

  class  AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasDeclarationContext* aliasDeclaration();

  class  SimpleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    DeclSpecifierSeqContext *declSpecifierSeq();
    InitDeclaratorListContext *initDeclaratorList();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  EmptyDeclaration_Context : public antlr4::ParserRuleContext {
  public:
    EmptyDeclaration_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyDeclaration_Context* emptyDeclaration_();

  class  DeclSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    FunctionSpecifierContext *functionSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierContext* declSpecifier();

  class  DeclSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierContext *> declSpecifier();
    DeclSpecifierContext* declSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierSeqContext* declSpecifierSeq();

  class  FunctionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Virtual();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  TypedefNameContext : public antlr4::ParserRuleContext {
  public:
    TypedefNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefNameContext* typedefName();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingTypeSpecifierContext *trailingTypeSpecifier();
    ClassSpecifierContext *classSpecifier();
    EnumSpecifierContext *enumSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TrailingTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Out();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingTypeSpecifierContext* trailingTypeSpecifier();

  class  TypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierSeqContext* typeSpecifierSeq();

  class  TrailingTypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TrailingTypeSpecifierContext *> trailingTypeSpecifier();
    TrailingTypeSpecifierContext* trailingTypeSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingTypeSpecifierSeqContext* trailingTypeSpecifierSeq();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    AsGenericContext *asGeneric();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Int8();
    antlr4::tree::TerminalNode *Int16();
    antlr4::tree::TerminalNode *Int32();
    antlr4::tree::TerminalNode *Int64();
    antlr4::tree::TerminalNode *UInt();
    antlr4::tree::TerminalNode *UInt8();
    antlr4::tree::TerminalNode *UInt16();
    antlr4::tree::TerminalNode *UInt32();
    antlr4::tree::TerminalNode *UInt64();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  AssertSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AssertSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ensure();
    antlr4::tree::TerminalNode *EnsureAlways();
    antlr4::tree::TerminalNode *Check();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssertSpecifierContext* assertSpecifier();

  class  TheTypeNameContext : public antlr4::ParserRuleContext {
  public:
    TheTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    EnumNameContext *enumName();
    TypedefNameContext *typedefName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeNameContext* theTypeName();

  class  DecltypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Auto();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypeSpecifierContext* decltypeSpecifier();

  class  ElaboratedTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Enum();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedTypeSpecifierContext* elaboratedTypeSpecifier();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumNameContext* enumName();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumHeadContext* enumHead();

  class  OpaqueEnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueEnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    EnumbaseContext *enumbase();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueEnumDeclarationContext* opaqueEnumDeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeSpecifierSeqContext *typeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorListContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
    EnumeratorDefinitionContext* enumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorListContext* enumeratorList();

  class  EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    antlr4::tree::TerminalNode *Assign();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalNamespaceNameContext *originalNamespaceName();
    NamespaceAliasContext *namespaceAlias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  OriginalNamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    OriginalNamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalNamespaceNameContext* originalNamespaceName();

  class  NamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AngelscriptParser::DeclarationseqContext *namespaceBody = nullptr;
    NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Identifier();
    OriginalNamespaceNameContext *originalNamespaceName();
    DeclarationseqContext *declarationseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  NamespaceAliasContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasContext* namespaceAlias();

  class  NamespaceAliasDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasDefinitionContext* namespaceAliasDefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceNameContext *namespaceName();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  BalancedTokenSeqContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BalancedtokenContext *> balancedtoken();
    BalancedtokenContext* balancedtoken(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedTokenSeqContext* balancedTokenSeq();

  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftParen();
    antlr4::tree::TerminalNode* LeftParen(size_t i);
    BalancedTokenSeqContext *balancedTokenSeq();
    std::vector<antlr4::tree::TerminalNode *> RightParen();
    antlr4::tree::TerminalNode* RightParen(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBrace();
    antlr4::tree::TerminalNode* LeftBrace(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBrace();
    antlr4::tree::TerminalNode* RightBrace(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenContext* balancedtoken();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorContext *> initDeclarator();
    InitDeclaratorContext* initDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorListContext* initDeclaratorList();

  class  InitDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorContext* initDeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorDefContext *declaratorDef();
    ParametersAndQualifiersContext *parametersAndQualifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  DeclaratorDefContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    DeclaratorDefContext *declaratorDef();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorDefContext* declaratorDef();
  DeclaratorDefContext* declaratorDef(int precedence);
  class  ParametersAndQualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersAndQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *Const();
    RefqualifierContext *refqualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersAndQualifiersContext* parametersAndQualifiers();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *AndAnd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdExpressionContext *idExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratoridContext* declaratorid();

  class  TheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeIdContext* theTypeId();

  class  ParameterDeclarationClauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationListContext *parameterDeclarationList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationClauseContext* parameterDeclarationClause();

  class  ParameterDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationContext *> parameterDeclaration();
    ParameterDeclarationContext* parameterDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationListContext* parameterDeclarationList();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionBodyContext *functionBody();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Mixin();
    DeclSpecifierSeqContext *declSpecifierSeq();
    PostFuncSpecifierSeqContext *postFuncSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceOrEqualInitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceOrEqualInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceOrEqualInitializerContext* braceOrEqualInitializer();

  class  InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerClauseContext* initializerClause();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerClauseContext *> initializerClause();
    InitializerClauseContext* initializerClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();

  class  BracedInitListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *RightBracket();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedInitListContext* bracedInitList();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class  ClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    MemberSpecificationContext *memberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassSpecifierContext* classSpecifier();

  class  ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    ClassHeadNameContext *classHeadName();
    BaseClauseContext *baseClause();
    ClassVirtSpecifierContext *classVirtSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadContext* classHead();

  class  ClassHeadNameContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadNameContext* classHeadName();

  class  ClassVirtSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassVirtSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassVirtSpecifierContext* classVirtSpecifier();

  class  MemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberdeclarationContext *> memberdeclaration();
    MemberdeclarationContext* memberdeclaration(size_t i);
    std::vector<AccessSpecifierContext *> accessSpecifier();
    AccessSpecifierContext* accessSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberSpecificationContext* memberSpecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyDefinitionContext *propertyDefinition();
    FunctionDefinitionContext *functionDefinition();
    AliasDeclarationContext *aliasDeclaration();
    EmptyDeclaration_Context *emptyDeclaration_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclarationContext* memberdeclaration();

  class  PropertyDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PropertyDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Default();
    DeclSpecifierSeqContext *declSpecifierSeq();
    MemberDeclaratorListContext *memberDeclaratorList();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyDefinitionContext* propertyDefinition();

  class  MemberDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberDeclaratorContext *> memberDeclarator();
    MemberDeclaratorContext* memberDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorListContext* memberDeclaratorList();

  class  MemberDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    PostFuncSpecifierSeqContext *postFuncSpecifierSeq();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *Colon();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorContext* memberDeclarator();

  class  PostFuncSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    PostFuncSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VirtualSpecifierContext *> virtualSpecifier();
    VirtualSpecifierContext* virtualSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostFuncSpecifierSeqContext* postFuncSpecifierSeq();

  class  VirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *Property();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualSpecifierContext* virtualSpecifier();

  class  BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseClauseContext* baseClause();

  class  BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseSpecifierContext *> baseSpecifier();
    BaseSpecifierContext* baseSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierListContext* baseSpecifierList();

  class  BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeSpecifierContext *baseTypeSpecifier();
    antlr4::tree::TerminalNode *Virtual();
    AccessSpecifierContext *accessSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierContext* baseSpecifier();

  class  ClassOrDeclTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrDeclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrDeclTypeContext* classOrDeclType();

  class  BaseTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDeclTypeContext *classOrDeclType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseTypeSpecifierContext* baseTypeSpecifier();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class  OperatorFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheOperatorContext *theOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorFunctionIdContext* operatorFunctionId();

  class  LiteralOperatorIdContext : public antlr4::ParserRuleContext {
  public:
    LiteralOperatorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralOperatorIdContext* literalOperatorId();

  class  TheOperatorContext : public antlr4::ParserRuleContext {
  public:
    TheOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Xor();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *AndAnd();
    antlr4::tree::TerminalNode *OrOr();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheOperatorContext* theOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *FloatingLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *UserDefinedLiteral();
    antlr4::tree::TerminalNode *Nullptr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool declaratorDefSempred(DeclaratorDefContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

