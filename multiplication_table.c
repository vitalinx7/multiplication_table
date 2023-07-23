#include <stdio.h>
//this multiplication table shows 1-10 multiplication

int main(){       //main with the variables integers
    int i, j;
    int table = 10;
    int max = 10;

    for (i = 1; i <= table; i++) {    //loop for increment
        for (j=0; j <= max; j++) {    //the limit loop for each table
            printf("%d x %d = %d\n", i, j, i*j);       //print for each table formated
        }
        printf("\n"); //blank lines between tables

    }
    return 0;
}