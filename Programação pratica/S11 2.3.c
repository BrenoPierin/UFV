#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos {
    char nome[20];
    int matricula;
    float cr;
}aluno;

void funcao (int n, aluno *vet, int tam) {
    if (n == tam) {
        printf ("%s\n%d\n%.2f\n", vet[n].nome, vet[n].matricula, vet[n].cr);
    }else {
        printf ("%s\n%d\n%.2f\n", vet[n].nome, vet[n].matricula, vet[n].cr);
        funcao (n+1, vet, tam);
    }
}




int main () {
    aluno vet[2];
    int i;
    int n=0;
    int tam=0;
    for (i=0; i<2;i++) {
    printf ("DIgite o nome do aluno:\n");
    scanf ("%s", vet[i].nome);
    printf ("digite a matricula do aluno:\n");
    scanf ("%d", &vet[i].matricula);
    printf ("digite o cr do aluno:\n");
    scanf ("%f", &vet[i].cr);
    tam++;
    }
    funcao (n, vet, tam-1);

    return 0;
}
