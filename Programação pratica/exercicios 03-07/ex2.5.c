#include <stdio.h>


typedef struct
{
    float Peso;
    char Nome[21];
    float Altura;
} Pessoa;

void IMC(Pessoa x){
  float IMC = x.Peso/( x.Altura* x.Altura);

  printf("A pessoa %s possui IMC igual a %.2f\n", x.Nome, IMC);
}

int main() {
  Pessoa p1, p2, pessoas[100];
  int i;

//   printf("Digite o nome de uma pessoa\n");
//   scanf("%s", p1.Nome);
//   printf("Digite o peso de uma pessoa\n");
//   scanf("%f", &p1.Peso);
//   printf("Digite a altura de uma pessoa\n");
//   scanf("%f", &p1.Altura);

//   fflush(stdin);
//     printf("Digite o nome de uma outra pessoa\n");
//   scanf("%s", p2.Nome);
//   printf("Digite o peso de uma outra pessoa\n");
//   scanf("%f", &p2.Peso);
//   printf("Digite a altura de uma outra pessoa\n");
//   scanf("%f", &p2.Altura);

// IMC(p1);
// IMC(p2);

  for(i = 0;i < 100;i++){
    fflush(stdin);
    
    printf("Digite o nome de uma pessoa\n");
    fgets(pessoas[i].Nome, 20, stdin);
  printf("Digite o peso de uma pessoa\n");
  scanf("%f", &pessoas[i].Peso);
  printf("Digite a altura de uma pessoa\n");
  scanf("%f", &pessoas[i].Altura);

  IMC(pessoas[i]);
    
  }

  return 0;
}