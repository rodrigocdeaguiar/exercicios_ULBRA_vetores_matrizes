/*Fazer um programa que leia uma matriz A 3x3 de elementos inteiros, 
calcule e depois mostre a soma das colunas da matriz*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 3
#define col 3

void cadastraMatriz(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um número inteiro, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
		}
	}
}

void somaColunas(int mat[lin][col]){
	int i, j, somaColuna;
	for(i=0;i<col;i++){
		somaColuna = 0;
		for(j=0;j<lin;j++){
			somaColuna+=mat[j][i];
		}
		printf("\nSoma da coluna %i: %i", i+1, somaColuna);
	}	
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	cadastraMatriz(matriz);
	somaColunas(matriz);
}
