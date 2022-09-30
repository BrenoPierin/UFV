#include <stdio.h>

int main() {
  int numero = 10, *p1, *p2;

  p1 = &numero;
  p2 = p1;

  printf("%x %x",&p1, &p2);
  
    return 0;
}
  