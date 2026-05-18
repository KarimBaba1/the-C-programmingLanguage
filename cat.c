#include <stdio.h>
#include <cs50.h>

//prototype 
int check(void);
void meow(int n);

int main(void){
    
    int n = check();
    meow(n);
}




int check(void){
    int n;
    do {
        n = get_int("How many times do you wanna meow? ");
    } while (n < 0 );
        return n; 

}





void meow(int n){
    for (int i = 0; i < n; i++){

        printf("meow\n");
    }
}
