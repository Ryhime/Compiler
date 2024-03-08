#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ErrorHandler.h"
#include "CodeOptimizer.h"

// Acts as the main file of the program



extern FILE *yyin;
extern int yyparse();

extern Node* parserResult;
SymbolTable* currSymbolTable;
ErrorTable* errorTable;


int main(){
    yyin = fopen("program.c","r");
    currSymbolTable = createSymbolTable();
    errorTable = createErrorTable();


    int validateResult = yyparse();
    if (validateResult==0) printf("Parse Completed!\n");
    else{
        printf("Failed to parse\n");
        return -1;
    }

    // Optimize
    // constantFolding(parserResult);

    if (errorTable->head!=NULL){
        printErrorTable(errorTable);
    }
    else{
        printAST(parserResult);
    }
    printSymbolTable(currSymbolTable);
    return 0;
}

Node* createExpressionNode(ExpressionType type,Node* left,Node* right){
    Expression* toCreate = calloc(sizeof(Expression),1);

    toCreate->type = type;
    toCreate->left = left;
    toCreate->right = right;

    toCreate->integer = 0;
    toCreate->variable = NULL;

    Node* toReturn = calloc(sizeof(Node),1);
    toReturn->type = NODE_EXPRESSION;
    toReturn->expression = toCreate;

    return toReturn;
}

Node* createExpressionIntNode(int value){
    Node* toCreate = createExpressionNode(EXPR_INT,NULL,NULL);
    toCreate->expression->integer = value;
    return toCreate;
}

Node* createExpressionFloatNode(float value){
    Node* toCreate = createExpressionNode(EXPR_FLOAT,NULL,NULL);
    toCreate->expression->floating = value;
    return toCreate;
} 

Node* createExpressionCharNode(char value){
    Node* toCreate = createExpressionNode(EXPR_CHAR,NULL,NULL);
    toCreate->expression->character = value;
    return toCreate;
} 

Node* createExpressionBoolNode(int value){
    Node* toCreate = createExpressionNode(EXPR_BOOL,NULL,NULL);
    toCreate->expression->boolean = value;
    return toCreate;
}

Node* createExpressionSymbolNode(char* name, int isDeclaring){
    Node* toCreate = createExpressionNode(EXPR_VAR,NULL,NULL);
    Symbol* symb = calloc(sizeof(Symbol),1);
    symb->name = calloc(strlen(name),1);
    strcpy(symb->name,name);
    toCreate->expression->variable = symb;

    // Symbol Table Lookup
    // NOTE: NEEDS TO BE UPDATED TO GO UP TO THE ROOT
    if (!isDeclaring && getSymbolFromTable(currSymbolTable,symb)==NULL){
        addErrorEntryToTable(errorTable,ERROR_VAR_DNE,symb->name);
    }
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
    
    Node* assignmentNode = createAssignmentNode(symbol,expr);

    declare->assignment = assignmentNode;

    Node* node = calloc(sizeof(Node),1);
    node->type = NODE_DECLARATION;
    node->declaration = declare;
    
    // Make sure it is not already in symbol table
    if (getSymbolFromTable(currSymbolTable,symbol->expression->variable)!=NULL){
        addErrorEntryToTable(errorTable,ERROR_VAR_ALREADY_EXISTS,symbol->expression->variable->name);
    }
    // Add to Symbol Table
    else{
        addSymbolToSymbolTable(currSymbolTable,symbol->expression->variable,type,0,0.0,'A',0);
    }
    return node;
}

Node* createWhileLoopNode(Node* expression, Node* insideLines){
    WhileLoop* whileLoop = calloc(sizeof(WhileLoop),1);
    whileLoop->conditionExpression = expression;
    whileLoop->insideLines = insideLines;

    Node* toReturnNode = calloc(sizeof(Node),1);
    toReturnNode->whileLoop = whileLoop;
    toReturnNode->type = NODE_WHILELOOP;

    return toReturnNode;
}

Node* createForLoopNode(Node* initExpr, Node* conditionExpr, Node* iterExpr, Node* insideLines){
    ForLoop* forLoop = calloc(sizeof(ForLoop),1);
    forLoop->initExpr = initExpr;
    forLoop->conditionExpr = conditionExpr;
    forLoop->iterationExpr = iterExpr;
    forLoop->insideLines = insideLines;

    Node* toReturnNode = calloc(sizeof(Node),1);
    toReturnNode->forLoop = forLoop;
    toReturnNode->type = NODE_FORLOOP;

    return toReturnNode;
}

Node* createIfStatementNode(Node* expr, Node* insideLines, Node* falseCondition, int isElse){
    IfStatement* ifStatement = calloc(sizeof(IfStatement),1);
    ifStatement->isElse = isElse;
    ifStatement->condition = expr;
    ifStatement->insideLines = insideLines;
    ifStatement->falseCondition = falseCondition;

    Node* toReturnNode = calloc(sizeof(Node),1);
    toReturnNode ->ifStatement = ifStatement;
    toReturnNode->type = NODE_IFSTATEMENT;

    return toReturnNode;
}

void freeNode(Node* node){
    
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
        printf("=");
    }
    // Print node
    if (root->type==NODE_ASSIGN){
        printf("ASSIGNMENT\n");
        printASTHelper(root->assignment->toAssign,depth+1);
        printASTHelper(root->assignment->expr,depth+1);
    }
    else if (root->type==NODE_EXPRESSION){
        if (root->expression->type==EXPR_INT) printf("%d\n",root->expression->integer);
        else if (root->expression->type==EXPR_FLOAT) printf("%.6f\n",root->expression->floating);
        else if (root->expression->type==EXPR_CHAR) printf("%c\n",root->expression->character);
        else if (root->expression->type==EXPR_BOOL){
            printf("%s\n",root->expression->boolean?"True":"False");
        } 
        else if (root->expression->type==EXPR_VAR) printf("%s\n",root->expression->variable->name);

        if (root->expression->left!=NULL) printASTHelper(root->expression->left,depth+1);
        if (root->expression->right!=NULL) printASTHelper(root->expression->right,depth+1);
    }
    else if (root->type==NODE_DECLARATION){
        printf("DECLARATION\n");
        printASTHelper(root->declaration->assignment,depth+1);
    }
    else if (root->type==NODE_WHILELOOP){
        printf("Starting While Loop!\n");
        printAST(root->whileLoop->insideLines);
        printf("Finished While Loop!\n");
    }
    else if (root->type==NODE_FORLOOP){
        printf("Starting For Loop!\n");
        printAST(root->forLoop->insideLines);
        printf("Finished For Loop!\n");
    }
    else if (root->type==NODE_IFSTATEMENT){
        if (!root->ifStatement->isElse) printf("Starting If Statement!\n");
        else printf("Starting Else Statement!\n");

        printAST(root->ifStatement->insideLines);
        if (root->ifStatement->falseCondition!=NULL){
            printASTHelper(root->ifStatement->falseCondition,depth+1);
        }

        if (!root->ifStatement->isElse) printf("Finished If Statement!\n");
        else printf("Finished Else Statement!\n");
    }
}

Node* connectNodes(Node* top,Node* bottom){
    top->next = bottom;
    return top;
}