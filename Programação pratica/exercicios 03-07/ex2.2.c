#include <stdio.h>

void EXCLAMACAO(int x){
  int i,j;

  for(i = 0; i<x; i++){
    for(j = 0;j<=i; j++){
      printf("!");
    }
    printf("\n");
  }
}

int main() {
  int x = 5,y = 250,z = 1472;

  EXCLAMACAO(x);
  
  return 0;
}
  