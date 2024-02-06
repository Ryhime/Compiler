#include "ASTGenerator.h"
#define TRUE 1
#define FALSE 0
// Checks left and right to see if they are valid types
int isValidExpressionNode(Node* expressionNode);

int isBooleanOperator(ExpressionType expressionType);
int isMathOperator(ExpressionType expressionType);
int isConstant(ExpressionType expressionType);
int isExpressionTerminal(ExpressionType expressionType);