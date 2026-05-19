#include <cs50.h>
#include <stdio.h>
#include <stdio.h>


int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
   int index = 0; 
    int length = (sizeof numbers / sizeof numbers[0]);
    for (int i = 0; i < length; i++) {
        if(numbers[i] == n){
        index = i;
        printf("%i\n", index);
        return 0;
        }
        
    }
    printf("not found\n");
    return 1;
}
