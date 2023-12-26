/* Fazer um programa que leia uma matriz A 4x2 de elementos inteiros, 
calcule e depois mostre a soma das linhas pares da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 4
#define col 2

void cadastraMatriz(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um número inteiro, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
		}
	}
}

void somaLinhasPares(int mat[lin][col]){
	int i, j, somaLinha;
	for(i=0;i<lin;i++){
		if(i%2==0){
			somaLinha = 0;
			for(j=0;j<col;j++){
				somaLinha+=mat[i][j];
			}
			printf("\nSoma da coluna %i: %i", i, somaLinha);
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

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	cadastraMatriz(matriz);
	somaLinhasPares(matriz);
	mostraMatriz(matriz);
}
