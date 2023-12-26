/* Fazer um programa que leia uma matriz M 5x5 elementos reais e calcule o 
somatório da diagonal principal. Mostre a matriz e o valor encontrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 5
#define col 5

void cadastraMatriz(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um número inteiro, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
		}
	}
}

void mostraMatriz(int mat[lin][col]){
	int i, j;
	printf("\nMatriz = [ ");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%i ", mat[i][j]);
		}
		if(i!=(lin-1)){
			printf("\n           ");
		}
		else{
			printf("]");
		}
	}
}

void somaDiagonal(int mat[lin][col]){
	int i, j, somaDiagonal=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(i==j){
				somaDiagonal+=mat[i][j];
			}
			else{
				continue;
			}
		}
	}
	printf("\nSoma dos elementos da diagonal principal: %i", somaDiagonal);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	cadastraMatriz(matriz);
	mostraMatriz(matriz);
	somaDiagonal(matriz);
}
