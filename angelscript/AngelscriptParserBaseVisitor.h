
// Generated from ./AngelscriptParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AngelscriptParserVisitor.h"


/**
 * This class provides an empty implementation of AngelscriptParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AngelscriptParserBaseVisitor : public AngelscriptParserVisitor {
public:

  virtual std::any visitScript(AngelscriptParser::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleImport(AngelscriptParser::ModuleImportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsGeneric(AngelscriptParser::AsGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeSpecifierList(AngelscriptParser::SimpleTypeSpecifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(AngelscriptParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(AngelscriptParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpression(AngelscriptParser::IdExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedId(AngelscriptParser::UnqualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedId(AngelscriptParser::QualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedNameSpecifier(AngelscriptParser::NestedNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(AngelscriptParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaIntroducer(AngelscriptParser::LambdaIntroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaCapture(AngelscriptParser::LambdaCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaptureDefault(AngelscriptParser::CaptureDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaptureList(AngelscriptParser::CaptureListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture(AngelscriptParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCapture(AngelscriptParser::SimpleCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitcapture(AngelscriptParser::InitcaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaDeclarator(AngelscriptParser::LambdaDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(AngelscriptParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(AngelscriptParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPseudoDestructorName(AngelscriptParser::PseudoDestructorNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(AngelscriptParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(AngelscriptParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewPlacement(AngelscriptParser::NewPlacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewInitializer_(AngelscriptParser::NewInitializer_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(AngelscriptParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(AngelscriptParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(AngelscriptParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(AngelscriptParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftOperator(AngelscriptParser::ShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(AngelscriptParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(AngelscriptParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(AngelscriptParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(AngelscriptParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(AngelscriptParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(AngelscriptParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(AngelscriptParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(AngelscriptParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(AngelscriptParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(AngelscriptParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(AngelscriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(AngelscriptParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AngelscriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatement(AngelscriptParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(AngelscriptParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(AngelscriptParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementSeq(AngelscriptParser::StatementSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectionStatement(AngelscriptParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(AngelscriptParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterationStatement(AngelscriptParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInitStatement(AngelscriptParser::ForInitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeDeclaration(AngelscriptParser::ForRangeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeInitializer(AngelscriptParser::ForRangeInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStatement(AngelscriptParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationStatement(AngelscriptParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationseq(AngelscriptParser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(AngelscriptParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDeclaration(AngelscriptParser::BlockDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasDeclaration(AngelscriptParser::AliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDeclaration(AngelscriptParser::SimpleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyDeclaration_(AngelscriptParser::EmptyDeclaration_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifier(AngelscriptParser::DeclSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifierSeq(AngelscriptParser::DeclSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSpecifier(AngelscriptParser::FunctionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedefName(AngelscriptParser::TypedefNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(AngelscriptParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingTypeSpecifier(AngelscriptParser::TrailingTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierSeq(AngelscriptParser::TypeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingTypeSpecifierSeq(AngelscriptParser::TrailingTypeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeSpecifier(AngelscriptParser::SimpleTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssertSpecifier(AngelscriptParser::AssertSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeName(AngelscriptParser::TheTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecltypeSpecifier(AngelscriptParser::DecltypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElaboratedTypeSpecifier(AngelscriptParser::ElaboratedTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumName(AngelscriptParser::EnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumSpecifier(AngelscriptParser::EnumSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumHead(AngelscriptParser::EnumHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpaqueEnumDeclaration(AngelscriptParser::OpaqueEnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumkey(AngelscriptParser::EnumkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumbase(AngelscriptParser::EnumbaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorList(AngelscriptParser::EnumeratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorDefinition(AngelscriptParser::EnumeratorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerator(AngelscriptParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceName(AngelscriptParser::NamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOriginalNamespaceName(AngelscriptParser::OriginalNamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceDefinition(AngelscriptParser::NamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceAlias(AngelscriptParser::NamespaceAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceAliasDefinition(AngelscriptParser::NamespaceAliasDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiednamespacespecifier(AngelscriptParser::QualifiednamespacespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedTokenSeq(AngelscriptParser::BalancedTokenSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedtoken(AngelscriptParser::BalancedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclaratorList(AngelscriptParser::InitDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclarator(AngelscriptParser::InitDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(AngelscriptParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaratorDef(AngelscriptParser::DeclaratorDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametersAndQualifiers(AngelscriptParser::ParametersAndQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefqualifier(AngelscriptParser::RefqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaratorid(AngelscriptParser::DeclaratoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeId(AngelscriptParser::TheTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclarationClause(AngelscriptParser::ParameterDeclarationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclarationList(AngelscriptParser::ParameterDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclaration(AngelscriptParser::ParameterDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(AngelscriptParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBody(AngelscriptParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(AngelscriptParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBraceOrEqualInitializer(AngelscriptParser::BraceOrEqualInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerClause(AngelscriptParser::InitializerClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(AngelscriptParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracedInitList(AngelscriptParser::BracedInitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassName(AngelscriptParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassSpecifier(AngelscriptParser::ClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassHead(AngelscriptParser::ClassHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassHeadName(AngelscriptParser::ClassHeadNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassVirtSpecifier(AngelscriptParser::ClassVirtSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberSpecification(AngelscriptParser::MemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberdeclaration(AngelscriptParser::MemberdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropertyDefinition(AngelscriptParser::PropertyDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberDeclaratorList(AngelscriptParser::MemberDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberDeclarator(AngelscriptParser::MemberDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostFuncSpecifierSeq(AngelscriptParser::PostFuncSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtualSpecifier(AngelscriptParser::VirtualSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseClause(AngelscriptParser::BaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifierList(AngelscriptParser::BaseSpecifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifier(AngelscriptParser::BaseSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassOrDeclType(AngelscriptParser::ClassOrDeclTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseTypeSpecifier(AngelscriptParser::BaseTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessSpecifier(AngelscriptParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorFunctionId(AngelscriptParser::OperatorFunctionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralOperatorId(AngelscriptParser::LiteralOperatorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheOperator(AngelscriptParser::TheOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(AngelscriptParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

