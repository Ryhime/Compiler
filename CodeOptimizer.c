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
    if (left->type==EXPR_VAR || right->type==EXPR_VAR) return;

    // Should definitely move later since it might be used in other parts just not right now
    // See return types
    if (left->type==EXPR_INT && right->type==EXPR_INT){
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
        }
        expr->type = EXPR_INT;
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
    }
}

// Goes through each line of code
void constantFolding(Node* root){
    while (root!=NULL){
        constantFoldingHelper(root);
        root = root->next;
    }
}