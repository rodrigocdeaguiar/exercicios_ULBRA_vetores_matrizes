/*Fazer um programa que leia uma matriz M 2x3 de n�meros reais e calcule 
a m�dia dos seus elementos. Imprimir o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 2
#define col 3

void cadastraMatriz(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um n�mero inteiro, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
		}
	}
}

int calculaMedia(int mat[lin][col]){
	int i, j, soma=0, numDados = lin*col;
	printf("\nN�mero de n�s: %i", numDados);
	for(i=0;i<lin;i++){	
		for(j=0;j<col;j++){
			soma+=mat[i][j];
		}
	}
	printf("\nSoma: %i", soma);
	return soma/numDados;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	cadastraMatriz(matriz);
	printf("\nA m�dia dos elementos da matriz � %i.", calculaMedia(matriz));
}
