#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
  
    gets(nome);

    printf("%zu", strlen(nome));

      return 0;
}