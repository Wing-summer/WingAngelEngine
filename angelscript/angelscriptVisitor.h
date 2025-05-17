
// Generated from ./angelscript.g4 by ANTLR 4.13.2

#pragma once

#include "angelscriptParser.h"
#include "antlr4-runtime.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by angelscriptParser.
 */
class angelscriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:
    /**
     * Visit parse trees produced by angelscriptParser.
     */
    virtual std::any visitScript(angelscriptParser::ScriptContext *context) = 0;

    virtual std::any
    visitImport_(angelscriptParser::Import_Context *context) = 0;

    virtual std::any visitEnum_(angelscriptParser::Enum_Context *context) = 0;

    virtual std::any visitTypdef(angelscriptParser::TypdefContext *context) = 0;

    virtual std::any visitClass_(angelscriptParser::Class_Context *context) = 0;

    virtual std::any visitMixin_(angelscriptParser::Mixin_Context *context) = 0;

    virtual std::any
    visitInterface_(angelscriptParser::Interface_Context *context) = 0;

    virtual std::any
    visitFuncdef(angelscriptParser::FuncdefContext *context) = 0;

    virtual std::any
    visitVirtprop(angelscriptParser::VirtpropContext *context) = 0;

    virtual std::any visitVar_(angelscriptParser::Var_Context *context) = 0;

    virtual std::any visitFunc_(angelscriptParser::Func_Context *context) = 0;

    virtual std::any
    visitNamespace_(angelscriptParser::Namespace_Context *context) = 0;

    virtual std::any
    visitIntfmthd(angelscriptParser::IntfmthdContext *context) = 0;

    virtual std::any
    visitStatblock(angelscriptParser::StatblockContext *context) = 0;

    virtual std::any
    visitParamlist(angelscriptParser::ParamlistContext *context) = 0;

    virtual std::any
    visitTypemod(angelscriptParser::TypemodContext *context) = 0;

    virtual std::any visitType_(angelscriptParser::Type_Context *context) = 0;

    virtual std::any
    visitInitlist(angelscriptParser::InitlistContext *context) = 0;

    virtual std::any visitScope(angelscriptParser::ScopeContext *context) = 0;

    virtual std::any
    visitDatatype(angelscriptParser::DatatypeContext *context) = 0;

    virtual std::any
    visitStatement(angelscriptParser::StatementContext *context) = 0;

    virtual std::any
    visitSwitch_(angelscriptParser::Switch_Context *context) = 0;

    virtual std::any visitBreak_(angelscriptParser::Break_Context *context) = 0;

    virtual std::any visitFor_(angelscriptParser::For_Context *context) = 0;

    virtual std::any visitWhile_(angelscriptParser::While_Context *context) = 0;

    virtual std::any
    visitDowhile(angelscriptParser::DowhileContext *context) = 0;

    virtual std::any visitIf_(angelscriptParser::If_Context *context) = 0;

    virtual std::any
    visitContinue_(angelscriptParser::Continue_Context *context) = 0;

    virtual std::any
    visitExprstat(angelscriptParser::ExprstatContext *context) = 0;

    virtual std::any visitTry_(angelscriptParser::Try_Context *context) = 0;

    virtual std::any
    visitReturn_(angelscriptParser::Return_Context *context) = 0;

    virtual std::any visitCase_(angelscriptParser::Case_Context *context) = 0;

    virtual std::any visitExpr(angelscriptParser::ExprContext *context) = 0;

    virtual std::any
    visitExprterm(angelscriptParser::ExprtermContext *context) = 0;

    virtual std::any
    visitExprvalue(angelscriptParser::ExprvalueContext *context) = 0;

    virtual std::any
    visitConstructcall(angelscriptParser::ConstructcallContext *context) = 0;

    virtual std::any
    visitExprpostop(angelscriptParser::ExprpostopContext *context) = 0;

    virtual std::any visitCast(angelscriptParser::CastContext *context) = 0;

    virtual std::any
    visitLambda_(angelscriptParser::Lambda_Context *context) = 0;

    virtual std::any
    visitFunccall(angelscriptParser::FunccallContext *context) = 0;

    virtual std::any
    visitVaraccess(angelscriptParser::VaraccessContext *context) = 0;

    virtual std::any
    visitArglist(angelscriptParser::ArglistContext *context) = 0;

    virtual std::any visitAssign(angelscriptParser::AssignContext *context) = 0;

    virtual std::any
    visitCondition(angelscriptParser::ConditionContext *context) = 0;

    virtual std::any visitExprop(angelscriptParser::ExpropContext *context) = 0;
};
