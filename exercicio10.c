/* Elaborar um programa que leia uma matriz de inteiros M 3x3 e um valor 
inteiro A. Colocar todos os elementos da matriz multiplicados por A em um 
vetor V de 9 posições. Imprimir o vetor V.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lin 3
#define col 3
#define tamVetor 9

void cadastraMatriz(int vet[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("\nDigite um número inteiro, linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &vet[i][j]);
		}
	}
}

void multiplicaVetor(int vetorInicial[lin][col], int vetorFinal[tamVetor], int multiplicador){
	int contador=0, i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			vetorFinal[contador] = vetorInicial[i][j]*multiplicador;
			contador++;
		}
	}
}

void mostraVetorFinal(int vetorFinal[tamVetor]){
	int i;
	printf("\nVetor final: ");
	for(i=0;i<tamVetor;i++){
		printf("%i ", vetorFinal[i]);
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetorIni[lin][col], vetorFin[tamVetor], num;
	cadastraMatriz(vetorIni);
	printf("\nDigite um número inteiro, para multiplicar com os nós do vetor: ");
	scanf("%i", &num);
	multiplicaVetor(vetorIni, vetorFin, num);
	mostraVetorFinal(vetorFin);
}
