#include <stdlib.h>
#include <stdio.h>
#include "ASTGenerator.h"

extern FILE *yyin;
extern int yyparse();
extern Expression* parserResult;



int main(){
    yyin = fopen("program.c","r");
    int validateResult = yyparse();
    if (validateResult==0) printf("Parse Completed!\n");
    else{
        printf("Failed to parse\n");
        return -1;
    } 
    printAST(parserResult,0);
    return 0;
}

Expression* createExpression(ExpressionType type,Expression* left,Expression* right){
    Expression* toCreate = calloc(sizeof(Expression),1);

    toCreate->type = type;
    toCreate->left = left;
    toCreate->right = right;

    toCreate->value = 0;
    return toCreate;
}

Expression* createExpressionValue(int value){
    Expression* toCreate = createExpression(EXPR_VAL,NULL,NULL);
    toCreate->value = value;
    return toCreate;
}

void printAST(Expression* root,int depth){
    // Actually print node
    for (int i=0;i<depth;i++){
        printf("-");
    }
    if (root->type==EXPR_VAL) printf("VALUE: %d\n",root->value);
    else printf("TYPE: %d\n",root->type);

    if (root->left!=NULL) printAST(root->left,depth+1);
    if (root->right!=NULL) printAST(root->right,depth+1);
}