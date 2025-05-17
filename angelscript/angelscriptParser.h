
// Generated from ./angelscript.g4 by ANTLR 4.13.2

#pragma once

#include "antlr4-runtime.h"

class angelscriptParser : public antlr4::Parser {
public:
    enum {
        T__0 = 1,
        T__1 = 2,
        T__2 = 3,
        T__3 = 4,
        T__4 = 5,
        T__5 = 6,
        T__6 = 7,
        T__7 = 8,
        T__8 = 9,
        T__9 = 10,
        T__10 = 11,
        T__11 = 12,
        T__12 = 13,
        T__13 = 14,
        T__14 = 15,
        T__15 = 16,
        T__16 = 17,
        T__17 = 18,
        T__18 = 19,
        T__19 = 20,
        T__20 = 21,
        T__21 = 22,
        T__22 = 23,
        T__23 = 24,
        T__24 = 25,
        T__25 = 26,
        T__26 = 27,
        T__27 = 28,
        T__28 = 29,
        T__29 = 30,
        T__30 = 31,
        T__31 = 32,
        T__32 = 33,
        T__33 = 34,
        T__34 = 35,
        T__35 = 36,
        T__36 = 37,
        T__37 = 38,
        T__38 = 39,
        T__39 = 40,
        T__40 = 41,
        T__41 = 42,
        T__42 = 43,
        T__43 = 44,
        T__44 = 45,
        T__45 = 46,
        T__46 = 47,
        T__47 = 48,
        T__48 = 49,
        T__49 = 50,
        T__50 = 51,
        T__51 = 52,
        T__52 = 53,
        T__53 = 54,
        T__54 = 55,
        T__55 = 56,
        T__56 = 57,
        T__57 = 58,
        NUMBER = 59,
        BITS = 60,
        STRING = 61,
        LITERAL = 62,
        IDENTIFIER = 63,
        BITOP = 64,
        MATHOP = 65,
        COMPOP = 66,
        LOGICOP = 67,
        ASSIGNOP = 68,
        PRIMTYPE = 69,
        FUNCATTR = 70,
        EXPRPREOP = 71,
        COMMENT = 72,
        WS = 73
    };

    enum {
        RuleScript = 0,
        RuleImport_ = 1,
        RuleEnum_ = 2,
        RuleTypdef = 3,
        RuleClass_ = 4,
        RuleMixin_ = 5,
        RuleInterface_ = 6,
        RuleFuncdef = 7,
        RuleVirtprop = 8,
        RuleVar_ = 9,
        RuleFunc_ = 10,
        RuleNamespace_ = 11,
        RuleIntfmthd = 12,
        RuleStatblock = 13,
        RuleParamlist = 14,
        RuleTypemod = 15,
        RuleType_ = 16,
        RuleInitlist = 17,
        RuleScope = 18,
        RuleDatatype = 19,
        RuleStatement = 20,
        RuleSwitch_ = 21,
        RuleBreak_ = 22,
        RuleFor_ = 23,
        RuleWhile_ = 24,
        RuleDowhile = 25,
        RuleIf_ = 26,
        RuleContinue_ = 27,
        RuleExprstat = 28,
        RuleTry_ = 29,
        RuleReturn_ = 30,
        RuleCase_ = 31,
        RuleExpr = 32,
        RuleExprterm = 33,
        RuleExprvalue = 34,
        RuleConstructcall = 35,
        RuleExprpostop = 36,
        RuleCast = 37,
        RuleLambda_ = 38,
        RuleFunccall = 39,
        RuleVaraccess = 40,
        RuleArglist = 41,
        RuleAssign = 42,
        RuleCondition = 43,
        RuleExprop = 44
    };

    explicit angelscriptParser(antlr4::TokenStream *input);

    angelscriptParser(antlr4::TokenStream *input,
                      const antlr4::atn::ParserATNSimulatorOptions &options);

    ~angelscriptParser() override;

    std::string getGrammarFileName() const override;

    const antlr4::atn::ATN &getATN() const override;

    const std::vector<std::string> &getRuleNames() const override;

    const antlr4::dfa::Vocabulary &getVocabulary() const override;

    antlr4::atn::SerializedATNView getSerializedATN() const override;

    class ScriptContext;
    class Import_Context;
    class Enum_Context;
    class TypdefContext;
    class Class_Context;
    class Mixin_Context;
    class Interface_Context;
    class FuncdefContext;
    class VirtpropContext;
    class Var_Context;
    class Func_Context;
    class Namespace_Context;
    class IntfmthdContext;
    class StatblockContext;
    class ParamlistContext;
    class TypemodContext;
    class Type_Context;
    class InitlistContext;
    class ScopeContext;
    class DatatypeContext;
    class StatementContext;
    class Switch_Context;
    class Break_Context;
    class For_Context;
    class While_Context;
    class DowhileContext;
    class If_Context;
    class Continue_Context;
    class ExprstatContext;
    class Try_Context;
    class Return_Context;
    class Case_Context;
    class ExprContext;
    class ExprtermContext;
    class ExprvalueContext;
    class ConstructcallContext;
    class ExprpostopContext;
    class CastContext;
    class Lambda_Context;
    class FunccallContext;
    class VaraccessContext;
    class ArglistContext;
    class AssignContext;
    class ConditionContext;
    class ExpropContext;

    class ScriptContext : public antlr4::ParserRuleContext {
    public:
        ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *EOF();
        std::vector<Import_Context *> import_();
        Import_Context *import_(size_t i);
        std::vector<Enum_Context *> enum_();
        Enum_Context *enum_(size_t i);
        std::vector<TypdefContext *> typdef();
        TypdefContext *typdef(size_t i);
        std::vector<Class_Context *> class_();
        Class_Context *class_(size_t i);
        std::vector<Mixin_Context *> mixin_();
        Mixin_Context *mixin_(size_t i);
        std::vector<Interface_Context *> interface_();
        Interface_Context *interface_(size_t i);
        std::vector<FuncdefContext *> funcdef();
        FuncdefContext *funcdef(size_t i);
        std::vector<VirtpropContext *> virtprop();
        VirtpropContext *virtprop(size_t i);
        std::vector<Var_Context *> var_();
        Var_Context *var_(size_t i);
        std::vector<Func_Context *> func_();
        Func_Context *func_(size_t i);
        std::vector<Namespace_Context *> namespace_();
        Namespace_Context *namespace_(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ScriptContext *script();

    class Import_Context : public antlr4::ParserRuleContext {
    public:
        Import_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        antlr4::tree::TerminalNode *IDENTIFIER();
        ParamlistContext *paramlist();
        antlr4::tree::TerminalNode *FUNCATTR();
        antlr4::tree::TerminalNode *STRING();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Import_Context *import_();

    class Enum_Context : public antlr4::ParserRuleContext {
    public:
        Enum_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<ExprContext *> expr();
        ExprContext *expr(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Enum_Context *enum_();

    class TypdefContext : public antlr4::ParserRuleContext {
    public:
        TypdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *PRIMTYPE();
        antlr4::tree::TerminalNode *IDENTIFIER();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    TypdefContext *typdef();

    class Class_Context : public antlr4::ParserRuleContext {
    public:
        Class_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<VirtpropContext *> virtprop();
        VirtpropContext *virtprop(size_t i);
        std::vector<Func_Context *> func_();
        Func_Context *func_(size_t i);
        std::vector<Var_Context *> var_();
        Var_Context *var_(size_t i);
        std::vector<FuncdefContext *> funcdef();
        FuncdefContext *funcdef(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Class_Context *class_();

    class Mixin_Context : public antlr4::ParserRuleContext {
    public:
        Mixin_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Class_Context *class_();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Mixin_Context *mixin_();

    class Interface_Context : public antlr4::ParserRuleContext {
    public:
        Interface_Context(antlr4::ParserRuleContext *parent,
                          size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<VirtpropContext *> virtprop();
        VirtpropContext *virtprop(size_t i);
        std::vector<IntfmthdContext *> intfmthd();
        IntfmthdContext *intfmthd(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Interface_Context *interface_();

    class FuncdefContext : public antlr4::ParserRuleContext {
    public:
        FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        antlr4::tree::TerminalNode *IDENTIFIER();
        ParamlistContext *paramlist();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    FuncdefContext *funcdef();

    class VirtpropContext : public antlr4::ParserRuleContext {
    public:
        VirtpropContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        antlr4::tree::TerminalNode *IDENTIFIER();
        std::vector<antlr4::tree::TerminalNode *> FUNCATTR();
        antlr4::tree::TerminalNode *FUNCATTR(size_t i);
        std::vector<StatblockContext *> statblock();
        StatblockContext *statblock(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    VirtpropContext *virtprop();

    class Var_Context : public antlr4::ParserRuleContext {
    public:
        Var_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<ArglistContext *> arglist();
        ArglistContext *arglist(size_t i);
        std::vector<InitlistContext *> initlist();
        InitlistContext *initlist(size_t i);
        std::vector<ExprContext *> expr();
        ExprContext *expr(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Var_Context *var_();

    class Func_Context : public antlr4::ParserRuleContext {
    public:
        Func_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *IDENTIFIER();
        ParamlistContext *paramlist();
        StatblockContext *statblock();
        Type_Context *type_();
        antlr4::tree::TerminalNode *FUNCATTR();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Func_Context *func_();

    class Namespace_Context : public antlr4::ParserRuleContext {
    public:
        Namespace_Context(antlr4::ParserRuleContext *parent,
                          size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *IDENTIFIER();
        ScriptContext *script();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Namespace_Context *namespace_();

    class IntfmthdContext : public antlr4::ParserRuleContext {
    public:
        IntfmthdContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        antlr4::tree::TerminalNode *IDENTIFIER();
        ParamlistContext *paramlist();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    IntfmthdContext *intfmthd();

    class StatblockContext : public antlr4::ParserRuleContext {
    public:
        StatblockContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<Var_Context *> var_();
        Var_Context *var_(size_t i);
        std::vector<StatementContext *> statement();
        StatementContext *statement(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    StatblockContext *statblock();

    class ParamlistContext : public antlr4::ParserRuleContext {
    public:
        ParamlistContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<Type_Context *> type_();
        Type_Context *type_(size_t i);
        std::vector<TypemodContext *> typemod();
        TypemodContext *typemod(size_t i);
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<ExprContext *> expr();
        ExprContext *expr(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ParamlistContext *paramlist();

    class TypemodContext : public antlr4::ParserRuleContext {
    public:
        TypemodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    TypemodContext *typemod();

    class Type_Context : public antlr4::ParserRuleContext {
    public:
        Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ScopeContext *scope();
        DatatypeContext *datatype();
        std::vector<Type_Context *> type_();
        Type_Context *type_(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Type_Context *type_();

    class InitlistContext : public antlr4::ParserRuleContext {
    public:
        InitlistContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<AssignContext *> assign();
        AssignContext *assign(size_t i);
        std::vector<InitlistContext *> initlist();
        InitlistContext *initlist(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    InitlistContext *initlist();

    class ScopeContext : public antlr4::ParserRuleContext {
    public:
        ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<Type_Context *> type_();
        Type_Context *type_(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ScopeContext *scope();

    class DatatypeContext : public antlr4::ParserRuleContext {
    public:
        DatatypeContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *IDENTIFIER();
        antlr4::tree::TerminalNode *PRIMTYPE();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    DatatypeContext *datatype();

    class StatementContext : public antlr4::ParserRuleContext {
    public:
        StatementContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        If_Context *if_();
        For_Context *for_();
        While_Context *while_();
        Return_Context *return_();
        StatblockContext *statblock();
        Break_Context *break_();
        Continue_Context *continue_();
        DowhileContext *dowhile();
        Switch_Context *switch_();
        ExprstatContext *exprstat();
        Try_Context *try_();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    StatementContext *statement();

    class Switch_Context : public antlr4::ParserRuleContext {
    public:
        Switch_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        AssignContext *assign();
        std::vector<Case_Context *> case_();
        Case_Context *case_(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Switch_Context *switch_();

    class Break_Context : public antlr4::ParserRuleContext {
    public:
        Break_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Break_Context *break_();

    class For_Context : public antlr4::ParserRuleContext {
    public:
        For_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<ExprstatContext *> exprstat();
        ExprstatContext *exprstat(size_t i);
        StatementContext *statement();
        Var_Context *var_();
        std::vector<AssignContext *> assign();
        AssignContext *assign(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    For_Context *for_();

    class While_Context : public antlr4::ParserRuleContext {
    public:
        While_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        AssignContext *assign();
        StatementContext *statement();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    While_Context *while_();

    class DowhileContext : public antlr4::ParserRuleContext {
    public:
        DowhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        StatementContext *statement();
        AssignContext *assign();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    DowhileContext *dowhile();

    class If_Context : public antlr4::ParserRuleContext {
    public:
        If_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        AssignContext *assign();
        std::vector<StatementContext *> statement();
        StatementContext *statement(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    If_Context *if_();

    class Continue_Context : public antlr4::ParserRuleContext {
    public:
        Continue_Context(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Continue_Context *continue_();

    class ExprstatContext : public antlr4::ParserRuleContext {
    public:
        ExprstatContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        AssignContext *assign();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExprstatContext *exprstat();

    class Try_Context : public antlr4::ParserRuleContext {
    public:
        Try_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<StatblockContext *> statblock();
        StatblockContext *statblock(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Try_Context *try_();

    class Return_Context : public antlr4::ParserRuleContext {
    public:
        Return_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ConditionContext *condition();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Return_Context *return_();

    class Case_Context : public antlr4::ParserRuleContext {
    public:
        Case_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ExprContext *expr();
        std::vector<StatementContext *> statement();
        StatementContext *statement(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Case_Context *case_();

    class ExprContext : public antlr4::ParserRuleContext {
    public:
        ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<ExprtermContext *> exprterm();
        ExprtermContext *exprterm(size_t i);
        std::vector<ExpropContext *> exprop();
        ExpropContext *exprop(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExprContext *expr();

    class ExprtermContext : public antlr4::ParserRuleContext {
    public:
        ExprtermContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        InitlistContext *initlist();
        Type_Context *type_();
        ExprvalueContext *exprvalue();
        std::vector<antlr4::tree::TerminalNode *> EXPRPREOP();
        antlr4::tree::TerminalNode *EXPRPREOP(size_t i);
        std::vector<ExprpostopContext *> exprpostop();
        ExprpostopContext *exprpostop(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExprtermContext *exprterm();

    class ExprvalueContext : public antlr4::ParserRuleContext {
    public:
        ExprvalueContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ConstructcallContext *constructcall();
        FunccallContext *funccall();
        VaraccessContext *varaccess();
        CastContext *cast();
        antlr4::tree::TerminalNode *LITERAL();
        AssignContext *assign();
        Lambda_Context *lambda_();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExprvalueContext *exprvalue();

    class ConstructcallContext : public antlr4::ParserRuleContext {
    public:
        ConstructcallContext(antlr4::ParserRuleContext *parent,
                             size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        ArglistContext *arglist();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ConstructcallContext *constructcall();

    class ExprpostopContext : public antlr4::ParserRuleContext {
    public:
        ExprpostopContext(antlr4::ParserRuleContext *parent,
                          size_t invokingState);
        virtual size_t getRuleIndex() const override;
        FunccallContext *funccall();
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<AssignContext *> assign();
        AssignContext *assign(size_t i);
        ArglistContext *arglist();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExprpostopContext *exprpostop();

    class CastContext : public antlr4::ParserRuleContext {
    public:
        CastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        Type_Context *type_();
        AssignContext *assign();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    CastContext *cast();

    class Lambda_Context : public antlr4::ParserRuleContext {
    public:
        Lambda_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        StatblockContext *statblock();
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);
        std::vector<Type_Context *> type_();
        Type_Context *type_(size_t i);
        std::vector<TypemodContext *> typemod();
        TypemodContext *typemod(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    Lambda_Context *lambda_();

    class FunccallContext : public antlr4::ParserRuleContext {
    public:
        FunccallContext(antlr4::ParserRuleContext *parent,
                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ScopeContext *scope();
        antlr4::tree::TerminalNode *IDENTIFIER();
        ArglistContext *arglist();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    FunccallContext *funccall();

    class VaraccessContext : public antlr4::ParserRuleContext {
    public:
        VaraccessContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ScopeContext *scope();
        antlr4::tree::TerminalNode *IDENTIFIER();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    VaraccessContext *varaccess();

    class ArglistContext : public antlr4::ParserRuleContext {
    public:
        ArglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<AssignContext *> assign();
        AssignContext *assign(size_t i);
        std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
        antlr4::tree::TerminalNode *IDENTIFIER(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ArglistContext *arglist();

    class AssignContext : public antlr4::ParserRuleContext {
    public:
        AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ConditionContext *condition();
        antlr4::tree::TerminalNode *ASSIGNOP();
        AssignContext *assign();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    AssignContext *assign();

    class ConditionContext : public antlr4::ParserRuleContext {
    public:
        ConditionContext(antlr4::ParserRuleContext *parent,
                         size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ExprContext *expr();
        std::vector<AssignContext *> assign();
        AssignContext *assign(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ConditionContext *condition();

    class ExpropContext : public antlr4::ParserRuleContext {
    public:
        ExpropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *MATHOP();
        antlr4::tree::TerminalNode *COMPOP();
        antlr4::tree::TerminalNode *LOGICOP();
        antlr4::tree::TerminalNode *BITOP();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExpropContext *exprop();

    // By default the static state used to implement the parser is lazily
    // initialized during the first call to the constructor. You can call this
    // function if you wish to initialize the static state ahead of time.
    static void initialize();

private:
};
