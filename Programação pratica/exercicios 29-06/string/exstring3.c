#include <stdio.h>
#include <string.h>
int main(void){
 char *vogais = "aeiouAEIOU", texto[20];

 fgets(texto, 19, stdin);
  
 int i;
 for(i = 0; i < strlen(texto); ++i)
  if(!(strchr(vogais, texto[i])))
   printf("%c", texto[i]);

 return 0;
}