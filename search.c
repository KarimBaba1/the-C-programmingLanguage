#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char strings[][20] = {"karim", "Ahmad", "baba", "ya waylak", "shoul", "ana", "khatir"};

    int length = (sizeof strings / sizeof strings[0]);
    printf("length: %i\n", length);
    
    string s =get_string("Enter Word: ");
    
    for(int j = 0; j < length; j++){

        for(int i = 0, len = strlen(strings[j]); i < len; i++){
            strings[j][i] = toupper(strings[j][i]);
        }

    }
    for (int i = 0, len = strlen(s); i < len; i++) {
        s[i] = toupper(s[i]);
    }


    for (int i = 0; i < length; i++) {
        if(strcmp(strings[i], s) == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not  found \n");
    return 1;
}
