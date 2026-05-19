#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

float average(int length, int numbers[]){

    int sum = 0;
    for(int i = 0; i < length; i++){
       sum += numbers[i];
    }
    return (float) sum / length;
}
//
int main(void)
{
    int scores[3];
    int length = sizeof(scores) / sizeof(scores[0]);
    for (int i=0; i< length; i++) {
        scores[i] = get_int("Enter your score: ");
    }


    printf("Your average score is %f\n", average(length, scores));
}

