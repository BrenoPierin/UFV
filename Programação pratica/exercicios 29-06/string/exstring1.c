#include <stdio.h>

int main() {
    char nome[50];
    int i, size=0;

    gets(nome);

    for(i = 0;nome[i]!='\0'; i++){
      size++;
    }

  printf("%d", size);

    return 0;
}