/*Escrever um programa que leia uma matriz M 3x3 de elementos inteiros no 
main(), crie uma função que receba a matriz e calcule a soma de todos os 
elementos da matriz. Retorne o valor do somatório para o main() e imprima o 
valor*/

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

int somaMatriz(int mat[lin][col]){
	int soma=0, i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			soma+=mat[i][j];
		}
	}
	return soma;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col];
	printf("\n____CADASTRAR MATRIZ____");
	cadastraMatriz(matriz);
	printf("\nSoma de todos os elementos da matriz: %i", somaMatriz(matriz));
}
