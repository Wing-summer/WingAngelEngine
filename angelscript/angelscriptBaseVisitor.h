
// Generated from ./angelscript.g4 by ANTLR 4.13.2

#pragma once

#include "angelscriptVisitor.h"
#include "antlr4-runtime.h"

/**
 * This class provides an empty implementation of angelscriptVisitor, which can
 * be extended to create a visitor which only needs to handle a subset of the
 * available methods.
 */
class angelscriptBaseVisitor : public angelscriptVisitor {
public:
    virtual std::any
    visitScript(angelscriptParser::ScriptContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitImport_(angelscriptParser::Import_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitEnum_(angelscriptParser::Enum_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitTypdef(angelscriptParser::TypdefContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitClass_(angelscriptParser::Class_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitMixin_(angelscriptParser::Mixin_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitInterface_(angelscriptParser::Interface_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitFuncdef(angelscriptParser::FuncdefContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitVirtprop(angelscriptParser::VirtpropContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitVar_(angelscriptParser::Var_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitFunc_(angelscriptParser::Func_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitNamespace_(angelscriptParser::Namespace_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitIntfmthd(angelscriptParser::IntfmthdContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitStatblock(angelscriptParser::StatblockContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitParamlist(angelscriptParser::ParamlistContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitTypemod(angelscriptParser::TypemodContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitType_(angelscriptParser::Type_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitInitlist(angelscriptParser::InitlistContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitScope(angelscriptParser::ScopeContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitDatatype(angelscriptParser::DatatypeContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitStatement(angelscriptParser::StatementContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitSwitch_(angelscriptParser::Switch_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitBreak_(angelscriptParser::Break_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitFor_(angelscriptParser::For_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitWhile_(angelscriptParser::While_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitDowhile(angelscriptParser::DowhileContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitIf_(angelscriptParser::If_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitContinue_(angelscriptParser::Continue_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExprstat(angelscriptParser::ExprstatContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitTry_(angelscriptParser::Try_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitReturn_(angelscriptParser::Return_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitCase_(angelscriptParser::Case_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitExpr(angelscriptParser::ExprContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExprterm(angelscriptParser::ExprtermContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExprvalue(angelscriptParser::ExprvalueContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitConstructcall(angelscriptParser::ConstructcallContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExprpostop(angelscriptParser::ExprpostopContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitCast(angelscriptParser::CastContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitLambda_(angelscriptParser::Lambda_Context *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitFunccall(angelscriptParser::FunccallContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitVaraccess(angelscriptParser::VaraccessContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitArglist(angelscriptParser::ArglistContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAssign(angelscriptParser::AssignContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitCondition(angelscriptParser::ConditionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExprop(angelscriptParser::ExpropContext *ctx) override {
        return visitChildren(ctx);
    }
};
