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
    printAST(parserResult);
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
    node->assignment = toCreate;
    return node;
}

Node* createDeclarationNode(DeclarationType type,Node* symbol,Node* expr){
    Declaration* declare = calloc(sizeof(Declaration),1);
    declare->type = type;
    
    Assignment* assign = calloc(sizeof(Assignment),1);
    assign->toAssign = symbol;
    assign->expr = expr;

    Node* assignmentNode = calloc(sizeof(Node),1);
    assignmentNode->type = NODE_ASSIGN;
    assignmentNode->assignment = assign;

    declare->assignment = assignmentNode;

    Node* node = calloc(sizeof(Node),1);
    node->type = NODE_DECLARATION;
    node->declaration = declare;

    return node;
}


void printAST(Node* root){
    while (root!=NULL){
        printf("====================\n");
        printASTHelper(root,0);
        root = root->next;
    }
    printf("====================\n");
}

void printASTHelper(Node* root,int depth){
    for (int i=0;i<depth;i++){
        printf("-");
    }
    // Print node
    if (root->type==NODE_ASSIGN){
        printf("ASSIGNMENT\n");
        printASTHelper(root->assignment->toAssign,depth+1);
        printASTHelper(root->assignment->expr,depth+1);
    }
    else if (root->type==NODE_EXPRESSION){
        if (root->expression->type==EXPR_VAL) printf("%d\n",root->expression->value);
        else if (root->expression->type==EXPR_VAR) printf("%s\n",root->expression->variable->name);
        if (root->expression->left!=NULL) printASTHelper(root->expression->left,depth+1);
        if (root->expression->right!=NULL) printASTHelper(root->expression->right,depth+1);
    }
    else if (root->type==NODE_DECLARATION){
        printf("DECLARATION\n");
        printASTHelper(root->declaration->assignment,depth+1);
    }
}

Node* connectNodes(Node* top,Node* bottom){
    top->next = bottom;
    return top;
}