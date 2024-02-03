typedef enum{
    EXPR_ADD,
    EXPR_SUB,
    EXPR_DIV,
    EXPR_MUL,
    EXPR_INT,
    EXPR_FLOAT,
    EXPR_CHAR,
    EXPR_BOOL,
    EXPR_VAR,

    EXPR_EQUAL,
    EXPR_LESS,
    EXPR_GREATER,
    EXPR_LESS_EQUAL,
    EXPR_GREATER_EQUAL,
    EXPR_NOT,
    EXPR_AND,
    EXPR_OR,
    EXPR_XOR
} ExpressionType;

typedef struct sym{
    char* name;
} Symbol;

typedef struct expr{
    ExpressionType type;
    struct node* left;
    struct node* right;
    int integer;
    float floating;
    char character;
    int boolean;
    Symbol* variable;
} Expression;

typedef struct assign{
    struct node* toAssign;
    struct node* expr;
} Assignment;

typedef enum{
    DECLARE_INT,
    DECLARE_FLOAT,
    DECLARE_CHAR,
    DECLARE_BOOL
} DeclarationType;


typedef struct declaration{
    DeclarationType type;
    struct node* assignment;
} Declaration;

typedef struct whileLoop{
    struct node* conditionExpression;
    struct node* insideLines;
} WhileLoop;

typedef struct forLoop{
    struct node* initExpr;
    struct node* conditionExpr;
    struct node* iterationExpr;

    struct node* insideLines;
} ForLoop;

typedef struct ifStatement{
    struct node* condition;
    struct node* insideLines;
    struct node* falseCondition;
    int isElse;
} IfStatement;

typedef enum{
    NODE_DECLARATION,
    NODE_ASSIGN,
    NODE_EXPRESSION,
    NODE_WHILELOOP,
    NODE_FORLOOP,
    NODE_IFSTATEMENT
} NodeType;


typedef struct node{
    NodeType type;
    struct node* next;

    // Could use a union do in future
    struct declaration* declaration;
    struct assign* assignment;
    struct expr* expression;
    struct whileLoop* whileLoop;
    struct forLoop* forLoop;
    struct ifStatement* ifStatement;
} Node;

Node* connectNodes(Node* top,Node* bottom);


Node* createExpressionNode(ExpressionType type,Node* left,Node* right);
Node* createExpressionIntNode(int value);
Node* createExpressionFloatNode(float value);
Node* createExpressionCharNode(char value);
Node* createExpressionBoolNode(int value);
Node* createExpressionSymbolNode(char* name);

Node* createAssignmentNode(Node* symbol,Node* expr);
Node* createDeclarationNode(DeclarationType type,Node* symbol,Node* expr);

Node* createWhileLoopNode(Node* expression, Node* insideLines);

Node* createForLoopNode(Node* initExpr, Node* conditionExpr, Node* iterExpr, Node* insideLines);

Node* createIfStatementNode(Node* expr, Node* insideLines, Node* falseCondition, int isElse);

void printAST(Node* root);
void printASTHelper(Node* root, int depth);