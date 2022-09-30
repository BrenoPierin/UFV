#include <stdio.h>

int main() {
    int mat[5][5],i,j, digitado;

    for(i = 0;i < 5; i++){
      for(j = 0; j < 5; j++){
        printf("Digite o %d valor da linha na %d coluna\n", i+1, j+1);
        scanf("%d", &mat[i][j]);
      };
    };

    printf("Digite um numero para ver se existe na matriz:\n");
    scanf("%d", &digitado);

    for(i = 0;i < 5; i++){
      for(j = 0;j < 5; j++){
        if(mat[i][j] == digitado){
          printf("%d %d",i, j);
        }else{
          printf("Não encontrado.");
          break;
        };
      };
    };

    return 0;
}
  