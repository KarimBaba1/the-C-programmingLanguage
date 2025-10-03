#include <stdio.h>

int fahr, cel;
int upper, lower;
int formula;
main(){
    upper = 300;
    lower = 0;
    fahr = lower;
    while (fahr <= upper){
        cel = 5 * (fahr - 32) /9;
        printf("%d\t%d\n",fahr, cel);
        fahr += 20;
    }
}
