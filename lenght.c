#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{

    string name = get_string("Enter Name: ");
    
    printf("lenght is: %i\n",(int) strlen(name));
}
