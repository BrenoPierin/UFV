#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Codifique, compile e execute um programa em C que crie uma estrutura Endereço com os seguintes
campos: nome da rua, número, cidade, estado e cep. Em seguida defina uma variável do tipo da
estrutura Endereço e leia os valores para cada um dos seus campos. Ao final, imprima os valores
armazenados em cada campo da estrutura na tela.
Entrada
A entrada de seu programa deve ser o nome da rua, com tamanho máximo de 20 caracteres, o
número da casa, a cidade, também com tamanho máximo de 20 caracteres, o estado, de tamanho
máximo de 3 caracteres e o cep como valor inteiro positivo.*/ 

	
		
		int main(){
			struct endereco{
		
		char rua[20];
		char cidade[20];
		char estado[3];
		int numero;
		int cep;		
		};	
		
		
		struct endereco endereco;
			printf("Informe o nome da rua:\n");
			fgets(endereco.rua,20,stdin);
			fflush(stdin);
			printf("Informe o numero da casa:\n");
			scanf("%d", &endereco.numero);
			printf("Informe a cidade:\n");
			fflush(stdin);
			fgets(endereco.cidade,20,stdin);
			printf("Informe o nome do estado:\n");
			fgets(endereco.estado,3,stdin);
			printf("Informe o cep:\n");
			scanf("%d", &endereco.cep);
			
			printf("\n");
			
			printf("%s%d%s%s%d", endereco.rua,endereco.numero,endereco.cidade,endereco.estado,endereco.cep);
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		return 0;		
			
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
