#include <stdio.h>

int main() {
    char palavra1[50], palavra2[50];
    int i, size1=0, size2=0, j = 0;

    gets(palavra1);
    gets(palavra2);

    for(i = 0;palavra1[i]!='\0'; i++){
      size1++;
    }

    for(i = 0;palavra2[i]!='\0'; i++){
      size2++;
    }

    if(size1 == size2){
      for(i = 0; palavra1[i]!='\0'; i++){
          if(palavra1[i] != palavra2[i]){
            j++;
            break;
          }
      }
      if(j > 0){
        printf("Nao");
      }else{
        printf("Sim");
      }
    }else(
      printf("Nao")
    );

  return 0;
}
  