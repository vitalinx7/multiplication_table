#include <stdio.h>

int main(){
    int i, j;
    int table = 10;
    int max = 10;

    for (i = 1; i <= table; i++) {
        for (j=0; j <= max; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); //blank lines between tables

    }
    return 0;
}