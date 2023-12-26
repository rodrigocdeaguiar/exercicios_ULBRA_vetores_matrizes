/*Escrever um programa que leia um número inteiro para a variável A e uma 
matriz M 2x3 de inteiros. Contar quantos elementos iguais ao valor de A 
estão na matriz e criar um vetor V de 6 posições, contendo todos os 
elementos de M diferentes de A. Imprimir os resultados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stddef.h>
#define lin 2
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

void contaNumInMatriz(int mat[lin][col], int vetor[lin*col], int numero){
	int i, j, contadorRepeticao=0, contador=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(numero==mat[i][j]){
				contadorRepeticao++;
			}
			else{
				continue;
			}
		}
	}
	printf("\nO número %i se repete %i vez(es) na matriz analisada.", numero, contadorRepeticao);
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(numero==mat[i][j]){
				continue;
			}
			else{
				vetor[contador]=mat[i][j];
				contador++;
			}
		}
	}
	printf("\nVetor de números na matriz diferentes do digitado: ");
	for(i=0;i<(contador);i++){
		printf("%i ", vetor[i]);
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], vetor[lin*col]={0}, num;
	printf("\n____CADASTRAR MATRIZ____");
	cadastraMatriz(matriz);
	printf("\nDigite um número inteiro para examinar o seu padrão de repetição na matriz: ");
	scanf("%i", &num);
	contaNumInMatriz(matriz, vetor, num);
}
