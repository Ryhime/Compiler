typedef enum{
    EXPR_ADD,
    EXPR_SUB,
    EXPR_DIV,
    EXPR_MUL,
    EXPR_VAL
} ExpressionType;

typedef struct expr{
    ExpressionType type;
    struct expr* left;
    struct expr* right;
    int value;
} Expression;


Expression* createExpression(ExpressionType type,Expression* left,Expression* right);
Expression* createExpressionValue(int value);

void printAST(Expression* root,int depth);