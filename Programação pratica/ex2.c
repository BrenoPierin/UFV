//ex 2.1

//declarar 3 numeros inteiros
//fazer entrada dos numeros
//exibir os numeros

#include <stdio.h>

//int main() {
//	
//	int n1,n2,n3;
//	
//	printf("Digite tres numeros:\n");
//	scanf("%d%d%d", &n1,&n2,&n3);
//	
//	printf("Os numeros sao: %d, %d e %d\n", n1, n2,n3);
//	
//	return 0;
//}

//////////////////////////////////////////////////////////////////

//ex2.2

//declarar 3 notas (float) e a nota final
//fazer entrada das notas
//calcular o valor da media
//exibir o valor da media


//int main() {
//	
//	float nota1,nota2,nota3,media;
//	
//	printf("Digite suas 3 notas:\n");
//	scanf("%f%f%f", &nota1,&nota2,&nota3);
//	
//	media = (nota1+nota2+nota3)/3;
//	
//	
//	printf("Sua media e de: %.2f\n", media);
//	
//	return 0;
//}

//////////////////////////////////////////////////////////////////

//ex 2.3

//declarar float do salario inicial e final
//fazer entrada do salario
//calcular o valor do aumento
//exibir o valor do aumento

//int main() {
//	
//	float salarioI, salarioF;
//	
//	printf("Digite seu salario para receber o aumento:\n");
//	scanf("%f", &salarioI);
//	
//	salarioF = salarioI*1.25;
//	
//	printf("O salario de %.2f que recebera um aumento de 25%% sera de: %.2f\n", salarioI, salarioF);
//	
//	return 0;
//}

//////////////////////////////////////////////////////////////////

//ex 2.4

//declarar float da temperatura em graus e Fahrenheit
//fazer entrada do salario
//calcular o valor do aumento
//exibir o valor do aumento

// int main() {
	
// 	float cel, fah;
	
// 	printf("Digite uma temperatura em graus celcius:\n");
// 	scanf("%f", &cel);
	
// 	fah = cel * (9.0 / 5.0) + 32.0;
	
// 	printf("A temperatura em graus de %.1f sera de: %.1f Fahrenheit\n", cel, fah);
	
// 	return 0;
// }

//////////////////////////////////////////////////////////////////

//ex2.5

//declarar duas variaveis inteiras e uma auxiliar
//fazer a entrada dos valores que preencherão as variaveis
//trocar o valor das variaveis sendo aux=n1 e depois n1 = n2 e n2=aux
//exibir valores trocados

int main() {
  int n1,n2,aux;

  printf("digite dois numeros para inverter\n");

  scanf("%d%d", &n1,&n2);

  aux=n1;
  n1=n2;
  n2=aux;

  printf("os valores invertidos são: %d e %d\n", n1,n2);
  return 0;
}