#include <stdio.h>

int main() {
    char palavra[50];
    int i, vog = 0, con = 0;

    fgets(palavra, 49, stdin); 

    for(i = 0;palavra[i]!='\0'; i++){
        if (palavra[i] == 'a'||palavra[i] == 'e'||palavra[i] == 'i'||palavra[i] == 'o'||palavra[i] == 'u' || palavra[i] == 'A'|| palavra[i] == 'E'|| palavra[i] == 'I'|| palavra[i] == 
    'O'|| palavra[i] == 'U') {
            vog++;
        }else{
          con++;
        }
    }

    printf("%d %d", vog, con-1);


    return 0;
}
  
  