#define TAML 100
#include <stdio.h>
#include "funcoes.h"

int main() {
	LISTA L;
	lista_inicializar(&L);
	
	inserir_iniciolista(&L, 'b', 'k', 2, 34);
	inserir_fimlista(&L, 'g', 'k', 3, 43);
//	printf("%c", L.Playlist[99].cantor[0]);
//	printf(" %c", L.Playlist[99].nome[0]);
//	printf(" %d", L.Playlist[99].duracao_min);
//	printf(" %d", L.Playlist[99].duracao_sec);
	
	buscar_nome(&L, 'b');
	
	lista_remover(&L);
//	
//	printf("%c", L.Playlist[0].cantor[0]);
//	printf(" %c", L.Playlist[0].nome[0]);
//	printf(" %d", L.Playlist[0].duracao_min);
//	printf(" %d", L.Playlist[0].duracao_sec);
//	
//	printf("%c", L.Playlist[99].cantor[0]);
//	printf(" %c", L.Playlist[99].nome[0]);
//	printf(" %d", L.Playlist[99].duracao_min);
//	printf(" %d", L.Playlist[99].duracao_sec);
	
}
