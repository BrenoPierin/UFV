#include <stdio.h>

void TRI(int x,int y, int z){
  if(x < y+z && y < x+z && z < x+y){
    if(x != 0 && y != 0 && z != 0){
      if(x == y && x==z){
      puts("equilatero");
    }else if(x == y || x == z){
      puts("isociles");
    }else{
      puts("escaleno");
    }
    }else{
    puts("invalido");
    }
  }else{
    puts("invalido");
  }
}

int main() {
  int x,y,z;

  char result;
    printf("Digite três valores (obrigatoriamente maiores que zero),representando as medidas dos três lados de um triângulo\n");
    scanf("%d%d%d", &x,&y,&z);
    
    TRI(x,y,z);
  
    return 0;
}