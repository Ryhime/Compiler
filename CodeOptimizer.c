#include <stdlib.h>
#include <stdio.h>
#include "CodeOptimizer.h"

// Folds a single expression
void constantFoldExpression(Expression* expr){
    if (expr->left==NULL || expr->right==NULL) return;
    Expression* left = expr->left->expression;
    Expression* right = expr->right->expression;
    constantFoldExpression(left);
    constantFoldExpression(right);
    // If either left or right are vars can't do anything
    if (expr->left->expression->type==EXPR_VAR || expr->right->expression->type==EXPR_VAR) return;
    if (left->type==EXPR_INT && right->type==EXPR_INT){
        int modifiedToBool = 0;
        switch (expr->type){
            case EXPR_ADD:
                expr->integer = left->integer+right->integer;
                break;
            case EXPR_SUB:
                expr->integer = left->integer-right->integer;
                break;
            case EXPR_MUL:
                expr->integer = left->integer*right->integer;
                break;
            case EXPR_DIV:
                expr->integer = left->integer/right->integer;
                break;
            case EXPR_GREATER:
                expr->boolean = left->integer>right->integer;
                modifiedToBool = 1;
                break;
            case EXPR_GREATER_EQUAL:
                expr->boolean = left->integer>=right->integer;
                modifiedToBool = 1;
                break;
            case EXPR_LESS:
                expr->boolean = left->integer<right->integer;
                modifiedToBool = 1;
                break;
            case EXPR_LESS_EQUAL:
                expr->boolean = left->integer<=left->integer;
                modifiedToBool = 1;
                break;
            case EXPR_EQUAL:
                expr->boolean = left->integer==right->integer;
                modifiedToBool = 1;
                break;
            
        }
        if (modifiedToBool==0) expr->type = EXPR_INT;
        else expr->type = EXPR_BOOL;
        freeNode(expr->left);
        freeNode(expr->right);
        expr->left = NULL;
        expr->right = NULL;
    }
    else if ((left->type==EXPR_FLOAT || right->type==EXPR_FLOAT) || (left->type==EXPR_INT || right->type==EXPR_INT)){

        float leftVal;
        if (left->type==EXPR_FLOAT) leftVal = left->floating;
        else leftVal = left->integer;

        float rightVal;
        if (right->type==EXPR_FLOAT) rightVal = right->floating;
        else rightVal = right->integer;
 
        switch (expr->type){
            case EXPR_ADD:
                expr->floating = leftVal+rightVal;
                break;
            case EXPR_SUB:
                expr->floating = leftVal-rightVal;
                break;
            case EXPR_MUL:
                expr->floating = leftVal*rightVal;
                break;
            case EXPR_DIV:
                expr->floating = leftVal/rightVal;
                break;
        }
        expr->type = EXPR_FLOAT;
        freeNode(expr->left);
        freeNode(expr->right);
        expr->left = NULL;
        expr->right = NULL;
    }
    else if (left->type==EXPR_BOOL && right->type==EXPR_BOOL){
        switch (expr->type){
            case EXPR_AND:
                expr->boolean = left->boolean && right->boolean;
                break;
            case EXPR_OR:
                expr->boolean = left->boolean || right->boolean;
                break;
            case EXPR_XOR:
                expr->boolean = (left->boolean && !right->boolean) || (!left->boolean && right->boolean);
                break;
        }
        expr->type = EXPR_BOOL;
        freeNode(expr->left);
        freeNode(expr->right);
        expr->left = NULL;
        expr->right = NULL;
    }
}

// Checks for things like if statements, while, for, etc.
void constantFoldingHelper(Node* root){
    switch (root->type){
        case NODE_ASSIGN:
            constantFoldExpression(root->assignment->expr->expression);
            break;
        case NODE_DECLARATION:
            constantFoldExpression(root->declaration->assignment->assignment->expr->expression);
            break;
        case NODE_IFSTATEMENT:
            // Check conditional
            constantFoldExpression(root->ifStatement->condition->expression);
            // Check inside lines
            constantFolding(root->ifStatement->insideLines);
            break;
        case NODE_FORLOOP:
            constantFoldExpression(root->forLoop->initExpr->declaration->assignment->assignment->expr->expression);
            constantFoldExpression(root->forLoop->conditionExpr->expression);
            constantFoldExpression(root->forLoop->iterationExpr->assignment->expr->expression);
            constantFolding(root->forLoop->insideLines);
            break;

        case NODE_WHILELOOP:
            constantFoldExpression(root->whileLoop->conditionExpression->expression);
            constantFolding(root->whileLoop->insideLines);
            break;
    }
}

// Goes through each line of code
void constantFolding(Node* root){
    while (root!=NULL){
        constantFoldingHelper(root);
        root = root->next;
    }
}