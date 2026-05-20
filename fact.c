#include <stdio.h>
#include <cs50.h>


int fact( int n );
int main(void)
{
   int n = get_int("Number: "); 

    printf("%i\n",fact(n));
}

int fact( int n ){

    // Print the current step
    printf("Calculating: fact(%i)\n", n);

    if(n <= 0){
        printf("reached base case 1 \n"); return 1;

    }

    int result = n * fact(n-1);
    
    printf("%i! is %i\n", n, result);
    return result; 
}
