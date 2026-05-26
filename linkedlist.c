#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;


int main(void)
{

    node *list = NULL;

    for(int i = 0; i < 3; i++){

        node *n = malloc(sizeof(node));
        if(n == NULL) return 1;
        n->number = i+1;
        n->next = NULL;

        n->next = list;
        list = n;
    }

    //print the address, value
    node *tmp = list;
    while (tmp != NULL) {

        printf(" current node: %p, value: %i, next node: %p\n", tmp, tmp->number, tmp->next);
        tmp = tmp->next;
    }

}
