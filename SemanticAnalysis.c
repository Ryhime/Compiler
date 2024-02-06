#include "SemanticAnalysis.h"
int isValidExpressionNode(Node* expressionNode){
    Expression* baseExpression = expressionNode->expression;
    Expression* right = baseExpression->right;
    Expression* left = baseExpression->left;
}

int isBooleanOperator(ExpressionType expressionType){
    return expressionType==EXPR_EQUAL || expressionType==EXPR_LESS ||
        expressionType==EXPR_GREATER || expressionType==EXPR_LESS_EQUAL ||
        expressionType==EXPR_GREATER_EQUAL || expressionType==EXPR_NOT ||
        expressionType==EXPR_AND || expressionType==EXPR_OR ||
        expressionType==EXPR_XOR;
}
int isMathOperator(ExpressionType expressionType){
    return expressionType==EXPR_ADD || expressionType==EXPR_SUB ||
        expressionType==EXPR_DIV || expressionType==EXPR_MUL;
}
int isConstant(ExpressionType expressionType){
    return expressionType==EXPR_INT || expressionType==EXPR_FLOAT ||
        expressionType==EXPR_CHAR || expressionType==EXPR_BOOL;
}

int isExpressionTerminal(ExpressionType expressionType){
    return isConstant(expressionType) || expressionType==EXPR_VAR;
}