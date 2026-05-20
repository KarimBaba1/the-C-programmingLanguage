#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct {
    string name;
    string phone;
} person;

int main(void) 
{
    person people[3];
    
    people[0].name = "karim";
    people[1].name = "ahmad";
    people[2].name = "rim";

    people[0].phone = "48394857";
    people[1].phone = "w8348539408";
    people[2].phone = "837453198";

    string name = get_string("what is the name you are looking for? ");
    int length = sizeof(people) / sizeof(people[0]);

        for (int i = 0; i < length ; i++) {
            if(strcmp(people[i].name, name) == 0 ){

            printf("Found: %s, his number is: %s \n", people[i].name, people[i].phone );
            return 0;
        }
        }
            printf("failed to find \n");
            return 1;
        
}
