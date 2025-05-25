
// Generated from ./AngelscriptParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AngelscriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AngelscriptParser.
 */
class  AngelscriptParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AngelscriptParser.
   */
    virtual std::any visitScript(AngelscriptParser::ScriptContext *context) = 0;

    virtual std::any visitModuleImport(AngelscriptParser::ModuleImportContext *context) = 0;

    virtual std::any visitAsGeneric(AngelscriptParser::AsGenericContext *context) = 0;

    virtual std::any visitSimpleTypeSpecifierList(AngelscriptParser::SimpleTypeSpecifierListContext *context) = 0;

    virtual std::any visitBooleanLiteral(AngelscriptParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitPrimaryExpression(AngelscriptParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitIdExpression(AngelscriptParser::IdExpressionContext *context) = 0;

    virtual std::any visitUnqualifiedId(AngelscriptParser::UnqualifiedIdContext *context) = 0;

    virtual std::any visitQualifiedId(AngelscriptParser::QualifiedIdContext *context) = 0;

    virtual std::any visitNestedNameSpecifier(AngelscriptParser::NestedNameSpecifierContext *context) = 0;

    virtual std::any visitLambdaExpression(AngelscriptParser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaIntroducer(AngelscriptParser::LambdaIntroducerContext *context) = 0;

    virtual std::any visitLambdaCapture(AngelscriptParser::LambdaCaptureContext *context) = 0;

    virtual std::any visitCaptureDefault(AngelscriptParser::CaptureDefaultContext *context) = 0;

    virtual std::any visitCaptureList(AngelscriptParser::CaptureListContext *context) = 0;

    virtual std::any visitCapture(AngelscriptParser::CaptureContext *context) = 0;

    virtual std::any visitSimpleCapture(AngelscriptParser::SimpleCaptureContext *context) = 0;

    virtual std::any visitInitcapture(AngelscriptParser::InitcaptureContext *context) = 0;

    virtual std::any visitLambdaDeclarator(AngelscriptParser::LambdaDeclaratorContext *context) = 0;

    virtual std::any visitPostfixExpression(AngelscriptParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitExpressionList(AngelscriptParser::ExpressionListContext *context) = 0;

    virtual std::any visitPseudoDestructorName(AngelscriptParser::PseudoDestructorNameContext *context) = 0;

    virtual std::any visitUnaryExpression(AngelscriptParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitUnaryOperator(AngelscriptParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitNewPlacement(AngelscriptParser::NewPlacementContext *context) = 0;

    virtual std::any visitNewInitializer_(AngelscriptParser::NewInitializer_Context *context) = 0;

    virtual std::any visitCastExpression(AngelscriptParser::CastExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(AngelscriptParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(AngelscriptParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(AngelscriptParser::ShiftExpressionContext *context) = 0;

    virtual std::any visitShiftOperator(AngelscriptParser::ShiftOperatorContext *context) = 0;

    virtual std::any visitRelationalExpression(AngelscriptParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(AngelscriptParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(AngelscriptParser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(AngelscriptParser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(AngelscriptParser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(AngelscriptParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(AngelscriptParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(AngelscriptParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(AngelscriptParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAssignmentOperator(AngelscriptParser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitExpression(AngelscriptParser::ExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(AngelscriptParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitStatement(AngelscriptParser::StatementContext *context) = 0;

    virtual std::any visitLabeledStatement(AngelscriptParser::LabeledStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(AngelscriptParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(AngelscriptParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementSeq(AngelscriptParser::StatementSeqContext *context) = 0;

    virtual std::any visitSelectionStatement(AngelscriptParser::SelectionStatementContext *context) = 0;

    virtual std::any visitCondition(AngelscriptParser::ConditionContext *context) = 0;

    virtual std::any visitIterationStatement(AngelscriptParser::IterationStatementContext *context) = 0;

    virtual std::any visitForInitStatement(AngelscriptParser::ForInitStatementContext *context) = 0;

    virtual std::any visitForRangeDeclaration(AngelscriptParser::ForRangeDeclarationContext *context) = 0;

    virtual std::any visitForRangeInitializer(AngelscriptParser::ForRangeInitializerContext *context) = 0;

    virtual std::any visitJumpStatement(AngelscriptParser::JumpStatementContext *context) = 0;

    virtual std::any visitDeclarationStatement(AngelscriptParser::DeclarationStatementContext *context) = 0;

    virtual std::any visitDeclarationseq(AngelscriptParser::DeclarationseqContext *context) = 0;

    virtual std::any visitDeclaration(AngelscriptParser::DeclarationContext *context) = 0;

    virtual std::any visitBlockDeclaration(AngelscriptParser::BlockDeclarationContext *context) = 0;

    virtual std::any visitAliasDeclaration(AngelscriptParser::AliasDeclarationContext *context) = 0;

    virtual std::any visitSimpleDeclaration(AngelscriptParser::SimpleDeclarationContext *context) = 0;

    virtual std::any visitEmptyDeclaration_(AngelscriptParser::EmptyDeclaration_Context *context) = 0;

    virtual std::any visitDeclSpecifier(AngelscriptParser::DeclSpecifierContext *context) = 0;

    virtual std::any visitDeclSpecifierSeq(AngelscriptParser::DeclSpecifierSeqContext *context) = 0;

    virtual std::any visitFunctionSpecifier(AngelscriptParser::FunctionSpecifierContext *context) = 0;

    virtual std::any visitTypedefName(AngelscriptParser::TypedefNameContext *context) = 0;

    virtual std::any visitTypeSpecifier(AngelscriptParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifier(AngelscriptParser::TrailingTypeSpecifierContext *context) = 0;

    virtual std::any visitTypeSpecifierSeq(AngelscriptParser::TypeSpecifierSeqContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifierSeq(AngelscriptParser::TrailingTypeSpecifierSeqContext *context) = 0;

    virtual std::any visitSimpleTypeSpecifier(AngelscriptParser::SimpleTypeSpecifierContext *context) = 0;

    virtual std::any visitAssertSpecifier(AngelscriptParser::AssertSpecifierContext *context) = 0;

    virtual std::any visitTheTypeName(AngelscriptParser::TheTypeNameContext *context) = 0;

    virtual std::any visitDecltypeSpecifier(AngelscriptParser::DecltypeSpecifierContext *context) = 0;

    virtual std::any visitElaboratedTypeSpecifier(AngelscriptParser::ElaboratedTypeSpecifierContext *context) = 0;

    virtual std::any visitEnumName(AngelscriptParser::EnumNameContext *context) = 0;

    virtual std::any visitEnumSpecifier(AngelscriptParser::EnumSpecifierContext *context) = 0;

    virtual std::any visitEnumHead(AngelscriptParser::EnumHeadContext *context) = 0;

    virtual std::any visitOpaqueEnumDeclaration(AngelscriptParser::OpaqueEnumDeclarationContext *context) = 0;

    virtual std::any visitEnumkey(AngelscriptParser::EnumkeyContext *context) = 0;

    virtual std::any visitEnumbase(AngelscriptParser::EnumbaseContext *context) = 0;

    virtual std::any visitEnumeratorList(AngelscriptParser::EnumeratorListContext *context) = 0;

    virtual std::any visitEnumeratorDefinition(AngelscriptParser::EnumeratorDefinitionContext *context) = 0;

    virtual std::any visitEnumerator(AngelscriptParser::EnumeratorContext *context) = 0;

    virtual std::any visitNamespaceName(AngelscriptParser::NamespaceNameContext *context) = 0;

    virtual std::any visitOriginalNamespaceName(AngelscriptParser::OriginalNamespaceNameContext *context) = 0;

    virtual std::any visitNamespaceDefinition(AngelscriptParser::NamespaceDefinitionContext *context) = 0;

    virtual std::any visitNamespaceAlias(AngelscriptParser::NamespaceAliasContext *context) = 0;

    virtual std::any visitNamespaceAliasDefinition(AngelscriptParser::NamespaceAliasDefinitionContext *context) = 0;

    virtual std::any visitQualifiednamespacespecifier(AngelscriptParser::QualifiednamespacespecifierContext *context) = 0;

    virtual std::any visitBalancedTokenSeq(AngelscriptParser::BalancedTokenSeqContext *context) = 0;

    virtual std::any visitBalancedtoken(AngelscriptParser::BalancedtokenContext *context) = 0;

    virtual std::any visitInitDeclaratorList(AngelscriptParser::InitDeclaratorListContext *context) = 0;

    virtual std::any visitInitDeclarator(AngelscriptParser::InitDeclaratorContext *context) = 0;

    virtual std::any visitDeclarator(AngelscriptParser::DeclaratorContext *context) = 0;

    virtual std::any visitDeclaratorDef(AngelscriptParser::DeclaratorDefContext *context) = 0;

    virtual std::any visitParametersAndQualifiers(AngelscriptParser::ParametersAndQualifiersContext *context) = 0;

    virtual std::any visitRefqualifier(AngelscriptParser::RefqualifierContext *context) = 0;

    virtual std::any visitDeclaratorid(AngelscriptParser::DeclaratoridContext *context) = 0;

    virtual std::any visitTheTypeId(AngelscriptParser::TheTypeIdContext *context) = 0;

    virtual std::any visitParameterDeclarationClause(AngelscriptParser::ParameterDeclarationClauseContext *context) = 0;

    virtual std::any visitParameterDeclarationList(AngelscriptParser::ParameterDeclarationListContext *context) = 0;

    virtual std::any visitParameterDeclaration(AngelscriptParser::ParameterDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(AngelscriptParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionBody(AngelscriptParser::FunctionBodyContext *context) = 0;

    virtual std::any visitInitializer(AngelscriptParser::InitializerContext *context) = 0;

    virtual std::any visitBraceOrEqualInitializer(AngelscriptParser::BraceOrEqualInitializerContext *context) = 0;

    virtual std::any visitInitializerClause(AngelscriptParser::InitializerClauseContext *context) = 0;

    virtual std::any visitInitializerList(AngelscriptParser::InitializerListContext *context) = 0;

    virtual std::any visitBracedInitList(AngelscriptParser::BracedInitListContext *context) = 0;

    virtual std::any visitClassName(AngelscriptParser::ClassNameContext *context) = 0;

    virtual std::any visitClassSpecifier(AngelscriptParser::ClassSpecifierContext *context) = 0;

    virtual std::any visitClassHead(AngelscriptParser::ClassHeadContext *context) = 0;

    virtual std::any visitClassHeadName(AngelscriptParser::ClassHeadNameContext *context) = 0;

    virtual std::any visitClassVirtSpecifier(AngelscriptParser::ClassVirtSpecifierContext *context) = 0;

    virtual std::any visitMemberSpecification(AngelscriptParser::MemberSpecificationContext *context) = 0;

    virtual std::any visitMemberdeclaration(AngelscriptParser::MemberdeclarationContext *context) = 0;

    virtual std::any visitPropertyDefinition(AngelscriptParser::PropertyDefinitionContext *context) = 0;

    virtual std::any visitMemberDeclaratorList(AngelscriptParser::MemberDeclaratorListContext *context) = 0;

    virtual std::any visitMemberDeclarator(AngelscriptParser::MemberDeclaratorContext *context) = 0;

    virtual std::any visitPostFuncSpecifierSeq(AngelscriptParser::PostFuncSpecifierSeqContext *context) = 0;

    virtual std::any visitVirtualSpecifier(AngelscriptParser::VirtualSpecifierContext *context) = 0;

    virtual std::any visitBaseClause(AngelscriptParser::BaseClauseContext *context) = 0;

    virtual std::any visitBaseSpecifierList(AngelscriptParser::BaseSpecifierListContext *context) = 0;

    virtual std::any visitBaseSpecifier(AngelscriptParser::BaseSpecifierContext *context) = 0;

    virtual std::any visitClassOrDeclType(AngelscriptParser::ClassOrDeclTypeContext *context) = 0;

    virtual std::any visitBaseTypeSpecifier(AngelscriptParser::BaseTypeSpecifierContext *context) = 0;

    virtual std::any visitAccessSpecifier(AngelscriptParser::AccessSpecifierContext *context) = 0;

    virtual std::any visitOperatorFunctionId(AngelscriptParser::OperatorFunctionIdContext *context) = 0;

    virtual std::any visitLiteralOperatorId(AngelscriptParser::LiteralOperatorIdContext *context) = 0;

    virtual std::any visitTheOperator(AngelscriptParser::TheOperatorContext *context) = 0;

    virtual std::any visitLiteral(AngelscriptParser::LiteralContext *context) = 0;


};

