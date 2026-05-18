#include "stdio.h"

int main(void)
{
    const int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1 ; j++) {
            printf(" ");
        }
        for(int k = 0; k < i + 1; k++){
        printf("#");
        }
        printf(" ");
        for(int h = 0; h < n - i; h++){
            printf("#");
        }
        printf("\n");
    }
}

