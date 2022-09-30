#ifndef
#define  FILE_H
#define TAML 100
#include <stdio.h>

typedef struct sMusica {
	char nome[TAML];
	char cantor[TAML];
	int duracao_min;
	int duracao_sec;
}MUSICA;

typedef struct sLista {
	MUSICA Playlist[TAML];
	int n;
}LISTA;

void lista_inicializar(LISTA *ptrL)
{
 ptrL -> n = -1;
}

int lista_cheia(LISTA *ptrL){
 if(ptrL -> n+1 == TAML)
 return 1;
 else
 return 0;
}

int inserir_iniciolista(LISTA *ptrL, char nome, char cantor, int duracao_m, int duracao_s) {
	if(lista_cheia(ptrL))
 	{
 		printf("Erro – lista cheia");
 		return 1;
	}
	
	ptrL -> Playlist[0].nome[0] = nome;
	ptrL -> Playlist[0].cantor[0] = cantor;
	ptrL -> Playlist[0].duracao_min = duracao_m;
	ptrL -> Playlist[0].duracao_sec = duracao_s;

}

int inserir_fimlista(LISTA *ptrL, char nome, char cantor, int duracao_m, int duracao_s) {
	if(lista_cheia(ptrL))
 	{
 		printf("Erro – lista cheia");
 		return 1;
	}
	
	ptrL -> Playlist[99].nome[0] = nome;
	ptrL -> Playlist[99].cantor[0] = cantor;
	ptrL -> Playlist[99].duracao_min = duracao_m;
	ptrL -> Playlist[99].duracao_sec = duracao_s;

}

int lista_remover(LISTA *ptrL){
	ptrL -> Playlist[99].nome[0] = ' ';
	ptrL -> Playlist[99].cantor[0] = ' ';
	ptrL -> Playlist[99].duracao_min = -1;
	ptrL -> Playlist[99].duracao_sec = -1;
}

int buscar_nome(LISTA *ptrL, char nome){
	int i;
	
	for(i=0; i < TAML; i++){
		if(ptrL -> Playlist[i].nome[0] == nome){
			printf("%d", i);
		};
	}
}

#endif
