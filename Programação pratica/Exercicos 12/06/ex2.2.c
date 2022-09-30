#include <stdio.h>

int main() {
    int mat[3][3],i,j, maior = 0, menor = 0;

    for(i = 0;i < 3; i++){
      for(j = 0; j < 3; j++){
        printf("Digite o %d valor da linha na %d coluna\n", i+1, j+1);
        scanf("%d", &mat[i][j]);
      };
    };

    for(i = 0;i < 3; i++){
      for(j = 0;j < 3; j++){
        if(i == 0 && j == 0){
          maior = mat[i][j];
          menor = mat[i][j];
        }else if(mat[i][j] > maior) {
          maior = mat[i][j];
        }else if(mat[i][j] < menor){
          menor = mat[i][j];
        };
      };
    };

    printf("maior: %d\nmenor: %d\n", maior, menor);

    return 0;
}
  