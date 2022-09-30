#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sMateria
{
 int codigoNum;
 char codigo[3];
 char nome[50];
 int creditos;
 int carga;
}MATERIA;


typedef struct sNo
{
 MATERIA mat;
 struct sNo *prox;
}NO;

NO* inic(NO* lista)
{
 lista = NULL;
 return lista;
} 

NO* alocarNo()
{
  return (NO*) malloc(sizeof(NO));
}

NO* desalocarNo(NO* n)
{
  free(n);
}

int vazia(NO* n){
	if(n->prox==NULL){
		return 1;
	}else{
		return 0;
	}
}

NO* inserirFinal(NO *materia, MATERIA elem)
{

  NO *novo;
  NO *aux;

  novo = alocarNo();
  if(novo!=NULL)
  {
    novo->mat=elem;
    novo->prox=NULL;

    if(vazia(materia))
    {
    	materia = novo;
	}
    else
	{
    	aux = materia;
    	while (aux->prox!=NULL)
    		aux=aux->prox;
    	aux->prox=novo;
	}
	
	return materia;
	
	}
	else
	{
		printf("Erro na alocacao do no");
		return NULL;
	}
}
  
  void imprimir(NO *lista){
  	
	  NO *aux = lista;
  	
  	while(aux -> prox!=NULL && aux -> mat.codigo == "SIN" && aux -> mat.carga > 60) {
  		printf("aa%c\n", aux->mat.nome);
  		printf("%d\n", aux->mat.codigo);
  		printf("%d\n", aux->mat.creditos);
  		printf("%d\n", aux->mat.carga);
  		aux=aux->prox;
	  }
  	
  }
  
  NO* remover(int y, NO* le)
{
   NO* p;
   NO* q;
   p = le;
   q = le->prox;
   while (q != NULL && q->mat.codigo != y) {
      p = q;
      q = q->prox;
   }
   if (q != NULL) {
      p->prox = q->prox;
      free(q);
   }
   return le;
   
}
