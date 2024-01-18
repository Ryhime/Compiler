#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ASTGenerator.h"

extern FILE *yyin;
extern int yyparse();
extern Node* parserResult;



int main(){
    yyin = fopen("program.c","r");
    int validateResult = yyparse();
    if (validateResult==0) printf("Parse Completed!\n");
    else{
        printf("Failed to parse\n");
        return -1;
    } 
    printAST(parserResult,0);
    printf("=======================\n");
    printAST(parserResult->next,0);
    printf("=======================\n");
    printAST(parserResult->next->next,0);
    return 0;
}

Node* createExpressionNode(ExpressionType type,Node* left,Node* right){
    Expression* toCreate = calloc(sizeof(Expression),1);

    toCreate->type = type;
    toCreate->left = left;
    toCreate->right = right;

    toCreate->value = 0;
    toCreate->variable = NULL;

    Node* toReturn = calloc(sizeof(Node),1);
    toReturn->type = NODE_EXPRESSION;
    toReturn->next = NULL;
    toReturn->assignment = NULL;
    toReturn->expression = toCreate;
    return toReturn;
}

Node* createExpressionValueNode(int value){
    Node* toCreate = createExpressionNode(EXPR_VAL,NULL,NULL);
    toCreate->expression->value = value;
    return toCreate;
}

Node* createExpressionSymbolNode(char* name){
    Node* toCreate = createExpressionNode(EXPR_VAR,NULL,NULL);
    Symbol* symb = calloc(sizeof(Symbol),1);
    symb->name = calloc(strlen(name),1);
    strcpy(symb->name,name);
    toCreate->expression->variable = symb;
    return toCreate;
}


Node* createAssignmentNode(Node* symb,Node* expr){
    Assignment* toCreate = calloc(sizeof(Assignment),1);
    toCreate->toAssign = symb;
    toCreate->expr = expr;

    Node* node = calloc(sizeof(Node),1);
    node->type = NODE_ASSIGN;
    // FOR NOWWWWWWWWWW!!!!!!!!!!!!!!!!!
    node->next = NULL;
    node->assignment = toCreate;
    node->expression = NULL;
    return node;
}



void printAST(Node* root,int depth){
    for (int i=0;i<depth;i++){
        printf("-");
    }
    // Print node
    if (root->type==NODE_ASSIGN){
        printf("ASSIGNMENT\n");
        printAST(root->assignment->toAssign,depth+1);
        printAST(root->assignment->expr,depth+1);
    }
    else if (root->type==NODE_EXPRESSION){
        if (root->expression->type==EXPR_VAL) printf("%d\n",root->expression->value);
        else if (root->expression->type==EXPR_VAR) printf("%s\n",root->expression->variable->name);
        if (root->expression->left!=NULL) printAST(root->expression->left,depth+1);
        if (root->expression->right!=NULL) printAST(root->expression->right,depth+1);
    }
}

Node* connectNodes(Node* top,Node* bottom){
    top->next = bottom;
    return top;
}