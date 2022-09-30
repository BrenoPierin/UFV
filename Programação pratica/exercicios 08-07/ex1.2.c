#include <stdio.h>


void soma10p(int *x)
{
  int i, j;

  for(i=1; i <= *x; i++){
    if(i%2 != 0){
      printf("%d ", i);
    }
  }
  return;
}

int main() {
    int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);  

  soma10p(&numero);
  
    return 0;
}
  