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
    if (expr->type==EXPR_ADD){
        expr->floating = left->floating+right->floating;
        expr->type = EXPR_FLOAT;
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