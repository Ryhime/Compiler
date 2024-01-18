typedef enum{
    EXPR_ADD,
    EXPR_SUB,
    EXPR_DIV,
    EXPR_MUL,
    EXPR_VAL,
    EXPR_VAR
} ExpressionType;

typedef struct sym{
    char* name;
} Symbol;

typedef struct expr{
    ExpressionType type;
    struct node* left;
    struct node* right;
    int value;
    Symbol* variable;
} Expression;

typedef struct assign{
    struct node* toAssign;
    struct node* expr;
} Assignment;

typedef enum{
    NODE_ASSIGN,
    NODE_EXPRESSION
} NodeType;

typedef struct node{
    NodeType type;
    struct node* next;

    struct assign* assignment;
    struct expr* expression;
} Node;

Node* connectNodes(Node* top,Node* bottom);


Node* createExpressionNode(ExpressionType type,Node* left,Node* right);
Node* createExpressionValueNode(int value);
Node* createExpressionSymbolNode(char* name);

Node* createAssignmentNode(Node* symbol,Node* expr);


void printAST(Node* root,int depth);