#include <stdio.h>

int main() {
    int n, i, soma = 0, maior = 0, menor = 0;
    

    for(i = 1 ; i <= 15; i++) 
    {
      printf("Digite uma nota\n");
      scanf("%d",&n);
      soma = soma + n;

      if(n >= 0){
        if(n > maior)
        {
          maior = n;
        }
        if(menor == 0)
        {
          menor = n;
        }else if(n < menor)
        {
          menor = n;
        };
      } 
    };
    
    printf("%d media,%d maior, %d menor ", soma/15, maior, menor);
    return 0;
}