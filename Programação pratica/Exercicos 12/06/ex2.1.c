#include <stdio.h>

int main() {
    int mat[4][4],i,j;

    for(i = 0;i < 4; i++){
      for(j = 0; j < 4; j++){
        printf("Digite o %d valor da linha na %d coluna\n", i+1, j+1);
        scanf("%d", &mat[i][j]);
      };
    };

    for(i = 0;i < 4; i++){
      printf("\n");
      for(j = 0;j < 4; j++){
        printf(" %d", mat[i][j]);
      };
    };

  printf("\n\n");

    for(i = 0;i < 4; i++){
      for(j = 0;j < 4; j++){
        if(mat[i][j]%2 == 0){
          printf("%d %d\n", i,j);
        };
      };
      printf("\n");
    };

    return 0;
}
  