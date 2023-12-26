/*Faça um programa para ler uma matriz C 4x4 de elementos do tipo 
caractere. A seguir, troque os elementos da primeira coluna com os 
elementos da última coluna e escreva a matriz modificada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 4
#define col 4

void cadastraMatriz(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um caratere válido para a matriz, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
		}
	}
}

void trocaElementosMatriz(int mat[lin][col]){
	int i, aux1, aux2;
	for(i=0;i<lin;i++){
		aux2 = mat[i][col];
		aux1 = mat[i][0];
		mat[i][0] = aux2;
		mat[i][col] = aux1;
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
	printf("\n____CADASTRAR MATRIZ____");
	cadastraMatriz(matriz);
	printf("\n____MATRIZ ORIGINAL____");
	mostraMatriz(matriz);
	trocaElementosMatriz(matriz);
	printf("\n____MATRIZ MODIFICADA____");
	mostraMatriz(matriz);
}
