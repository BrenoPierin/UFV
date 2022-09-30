#include <stdio.h>

int DOBRO(int x){
  return x*2;
}

int main() {
  int x = 5,y = 250,z = 1472;

  int val1 = DOBRO(x);
  int val2 = DOBRO(y);
  int val3 = DOBRO(z);

  printf("%d\n%d\n%d", val1,val2,val3);
  
  return 0;
}
  