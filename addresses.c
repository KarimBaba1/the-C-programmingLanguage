#include <stdio.h>
#include <cs50.h>

int main(void){

char *s = "karim";

    printf("%p\n", s);
    printf("%p\n", &s);
    printf("%c\n", s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
}
