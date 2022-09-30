#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	/*A entrada de seu programa deve ser o nome da pessoa armazenado em um vetor de 20 caracteres; o
sexo com tamanho maximo de 10 caracteres; o peso do tipo inteiro positivo; a data de nascimento
que deve ter como entrada separada o dia, o mês e o ano e por fim, o endereço que deverá ser
separado em rua, número, bairro, estado e cep.
Saída
A saída deverá ser o nome de entrada, o sexo, o peso, a data de nascimento separada por uma barra
e o endereço. Deverá conter pulo de linha no fim da sentença.
*/

	int main(){
		
		struct pessoa{
		
		char nome[20];
		char sexo[10];
		int peso;
		int dia;
		int mes;
		int ano;

};
 			struct pessoa pessoa;
		struct endereco{
		
		char rua[20];
		char bairro[20];
		char estado[3];
		int numero;
		int cep;		
		};		
			struct endereco endereco;
	
	
	
	
				printf("Informe seu nome:\n");
				fgets(pessoa.nome,20,stdin);
				printf("Informe seu sexo:\n");
				fgets(pessoa.sexo,10,stdin);
				
				fflush(stdin);
				
				printf("Infome o seu peso:\n");
				scanf("%d",&pessoa.peso);
				printf("Infome sua data de nascimento:\n");
				scanf("%d%d%d",&pessoa.dia,&pessoa.mes,&pessoa.ano);
				
				printf("\n-----Informe seu endereco------\n");
				fflush(stdin);
				printf("Informe o nome da rua:\n");
				fgets(endereco.rua,20,stdin);
				
				fflush(stdin);
				
				printf("Informe o numero da casa:\n");
				scanf("%d",&endereco.numero);
				
				fflush(stdin);
				
				printf("Informe o seu bairro:\n");
				fgets(endereco.bairro,20,stdin);
				
				printf("Informe o seu estado:\n");
				fgets(endereco.estado,3,stdin);
				
				fflush(stdin);
				
				printf("Informe seu cep:\n");
				scanf("%d",&endereco.cep);
				printf("\n");
			
		printf("%s %s %d %d %d/%d/%d %d", pessoa.nome,pessoa.sexo,pessoa.peso,pessoa.dia,pessoa.mes,pessoa.ano);
		printf("%s %d %s %s %d",endereco.rua,endereco.numero,endereco.bairro,endereco.estado,endereco.cep);
		
		
		
			return 0;
	}

