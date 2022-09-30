#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra2[50];
    int i, size1=0, size2=0, j = 0;

    gets(palavra1);
    gets(palavra2);

  int values=strcmp(palavra1,palavra2);  
   if(values==0)  
   printf("Sim");  
   else  
   printf("Nao");  

  return 0;
}
  