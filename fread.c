#include <stdio.h>

int main(void){

    double a[] = {5.4, 6.8, 24.7, 6.0, 88.9};
    FILE *test = fopen("test.txt", "wb");
    int len = sizeof(a) / sizeof(a[0]);

 for (int i = 0; i < len; i++) {
        fprintf(test, "%f\n", a[i]);
    }
    fwrite(a, sizeof(*a), len , test );

    fclose(test) ;


}
