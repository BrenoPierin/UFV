#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	
		struct horario{
			int hora;
			int minuto;
			int segundo;
		};
	
	struct horario horario;
	int main(){
		printf("Informe a hora:\n");
		scanf("%d", &horario.hora);
		printf("Informe os minutos:\n");
		scanf("%d", &horario.minuto);
		printf("Informe os segundos:\n");
		scanf("%d", &horario.segundo);
		
		printf("\n-------horario-------\n");
		printf("%d:%d:%d\n", horario.hora,horario.minuto,horario.segundo);
		
		return 0;
	}
