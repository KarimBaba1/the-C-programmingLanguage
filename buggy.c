#include "stdio.h"
#include "cs50.h"

void print_column(int h
int main(void){
   
    int h;
    h = get_int("Height: ");
    
    print_column(h);

}
void print_column(int h){

    for (int i=0; i < h; i++) {
        printf("#\n");
    }
}
