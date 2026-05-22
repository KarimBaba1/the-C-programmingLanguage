#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


void swap(int *a, int *b){
    int tmp = *a;

    *a = *b;
    *b = tmp;

}


int main(void)
{
    
    int x = get_int("x: ");
    int y = get_int("y: ");


     swap(&x, &y);

printf("x = %i\n", x);
printf("y = %i\n", y);


}
