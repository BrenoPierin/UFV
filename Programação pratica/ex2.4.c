#include <stdio.h>

int main() {
    int n, i, soma = 1;
    printf("Digite um numero para resolver a fatorial\n");
    scanf("%d",&n);

    for(i = 1 ; i <= n; i++)
    {
      soma = i * soma;
    };
    printf("%d", soma);
    return 0;
}