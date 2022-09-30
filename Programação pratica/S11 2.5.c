#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao (int vet[10], int i) {

    if (i == 9) {
        printf ("digite um numero:\n");
        scanf ("%d", &vet[i]);
    }else {
         printf ("digite um numero:\n");
        scanf ("%d", &vet[i]);
        funcao (vet, i+1);
    }
}
void funcao2 (int vet[10], int i) {
        if (i == 9) {
            printf ("%d ", vet[i]);
        }else {
            printf ("%d ", vet[i]);
            funcao2 (vet, i+1);
        }
}



int main () {
    int vet[10];
    int i=0;
    funcao (vet, i);
    funcao2 (vet, i);

    return 0;
}
