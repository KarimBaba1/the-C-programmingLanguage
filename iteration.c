#include <stdio.h>
#include <cs50.h>


void draw(int n );
int main(void)
{
   int n = get_int("Number: "); 
    
    draw(n);
}

void draw(int n ){

   for(int i = 0; i < n; i++){
        for(int j = 0; j < i+n-1; j++){
            printf("#");
        }
        printf("\n");
    } 

}
