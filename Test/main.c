#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    struct Rectangle* rect = calloc(sizeof(struct Rectangle),1);
    rect->height = 5;
    printf("%d",rect->height);
}