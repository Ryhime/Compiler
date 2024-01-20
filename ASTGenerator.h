typedef enum{
    EXPR_ADD,
    EXPR_SUB,
    EXPR_DIV,
    EXPR_MUL,
    EXPR_INT,
    EXPR_FLOAT,
    EXPR_CHAR,
    EXPR_BOOL,
    EXPR_VAR
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

typedef enum{
    NODE_DECLARATION,
    NODE_ASSIGN,
    NODE_EXPRESSION
} NodeType;

typedef struct node{
    NodeType type;
    struct node* next;

    struct declaration* declaration;
    struct assign* assignment;
    struct expr* expression;
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

void printAST(Node* root);
void printASTHelper(Node* root, int depth);