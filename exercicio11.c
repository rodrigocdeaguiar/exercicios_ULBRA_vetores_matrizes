/*Dadas duas matrizes numéricas A, 5x5, e B, 5x5 criar e imprimir a matriz S, 
soma de A e B.*/

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

void somaMatrizes(int mat1[lin][col], int mat2[lin][col], int matSum[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			matSum[i][j] = mat1[i][j]+mat2[i][j];
		}
	}
}

void mostraMatriz(int mat[lin][col]){
	int i, j;
	printf("\nMatriz = [");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%i ", mat[i][j]);
		}
		if(i!=(lin-1)){
			printf("\n          ");
		}
		else{
			printf("]");
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[lin][col], mat2[lin][col], matSoma[lin][col];
	printf("\n___Matriz 1___");
	cadastraMatriz(mat1);
	printf("\n___Matriz 2___");
	cadastraMatriz(mat2);
	somaMatrizes(mat1, mat2, matSoma);
	printf("\n___Matriz final___");
	mostraMatriz(matSoma);
}
