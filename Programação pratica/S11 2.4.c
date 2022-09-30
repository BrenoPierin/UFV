#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao (int i, int n) {
    if (n == i || n == i-1) {
        printf ("%d ", n);

    }else {
        printf ("%d ", n);
        funcao (i, n+2);
        }
    }





int main () {
    int i;
    int n=0;


    printf ("digite um numero:\n");
    scanf ("%d", &i);

    funcao (i, n);



}
