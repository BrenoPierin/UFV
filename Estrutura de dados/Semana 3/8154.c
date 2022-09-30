#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int main()
{
 NO *ptrMateria;

 ptrMateria = inic(ptrMateria);
 
 MATERIA mat;
 
 char nome[7] = "Calculo";
 char codigo[3] = "SIN";
 
 mat.codigoNum = 1;
 strcpy(mat.codigo, codigo);
 strcpy(mat.nome, nome);
 mat.creditos = 6;
 mat.carga = 2;
 
 ptrMateria = inserirFinal(ptrMateria, mat);
 
 imprimir(ptrMateria);
  
 
}

