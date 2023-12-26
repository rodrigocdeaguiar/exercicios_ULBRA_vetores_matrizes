/*Fazer um programa que leia uma matriz M 3x3 elementos inteiros e 
encontre o seu maior valor. Mostre a matriz e o elemento de maior valor.*/

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

void mostraMaiorElementoMatriz(int mat[lin][col]){
	int i, j, maiorElemento;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(i==0&&j==0){
				maiorElemento = mat[i][j];
			}
			else{
				if(mat[i][j]>maiorElemento){
					maiorElemento = mat[i][j];
				}
				else{
					continue;
				}
			}
		}
	}
	printf("\nMaior elemento da matriz: %i", maiorElemento);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	cadastraMatriz(matriz);
	mostraMatriz(matriz);
	mostraMaiorElementoMatriz(matriz);
}
