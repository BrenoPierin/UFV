#include <stdio.h>

int SOMATORIO(int x){
  int i,result = 0;

  for(i = 0; i<x; i++){
    result = result + (i + 1);
  }

  return result;
}

int main() {
  int x;

  printf("Digite um valor\n");
    scanf("%d", &x);

  int val1 = SOMATORIO(x);

  printf("%d", val1);
  return 0;
}