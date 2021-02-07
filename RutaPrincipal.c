/**
*@file   RutaPrincipal.c
*@brief  Sección principal.
*@author Alan Cuadros Sánchez.
*@date   28-01-2021.
*@todo   Perfeccionar principal del código. 
*
*@param     nodos       Guarda la cantidad de nodos del grafo.
*@param     adya        Guarda la cantidad de adyacencias del grafo.
*@param     filcol      Esta variable no es necesaria ya que el contenido es igual a la variable nodos, se usa para evitar confusiones. 
*@param     a           Para guardar el punto "A" de la ruta.
*@param     b           Para guardad el punto "B" de la ruta.
*@param     matriz      Espacio para representar el grafo en forma de tabla.
*@param     grafo       Matriz auxiliar para el uso de recursividad.
*@param     aux         Variable auxiliar para la función recursiva.
*@param     r           Se guarda el resultado de la funcion de recursividad.
*@param     r2          Sirve para el uso de una estructura de repetición.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Ruta.h"

int main(){
			
	int a,b,filcol,nodos,adya,r,r2=0,aux=0;
    int matriz [TAM][TAM]; 
    int grafo [TAM][2];
	
	printf(".....RUTA MAS CORTA.....\n");	
	printf("Cuantos nodos hay?");
	scanf("%d", &nodos);
	
	filcol=nodos;
	imprimir(matriz,filcol);
	insertar0(matriz,filcol);
	printf("\n.....Numero de adyacencias.....\n");
	scanf("%d", &adya);
	introducir_adya(grafo,matriz,adya); 
	imprimir(matriz,filcol);   
	  
	while(r2==0){ // while
	printf("\n.....Ruta a buscar.....:\n");
	printf("Punto A: ");
	scanf("%d", &a);
	printf("Punto B: ");
	scanf("%d", &b);
	
	r=buscar(grafo,matriz,a,b,filcol,aux);
	if (r==1){
		printf("\n.....SI, si existe una ruta");
	}
	else {
		printf("\n.....NO, no existe una ruta");
	}
	printf("\n\nSi desea buscar otra ruta presione 0\n Salir 1:\n\a");
	scanf("%d", &r2);
	}	//fin while
	
return 0;
}
