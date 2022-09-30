#include <stdio.h>

int POT(int x, int z){
  int i = 0, result, contagem;

  contagem = x;

  for(i=0;z-1>i;i++){
    contagem = x*contagem;
  }

  return contagem;
}

int main() {
  int x,z,result;
    printf("Digite dois valores, (sendo X o primeiro valor e Z o segundo valor de entrada, X^Z\n");
    scanf("%d%d", &x,&z);

    result = POT(x,z);  

    printf("%d", result);
  
    return 0;
}
  