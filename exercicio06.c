/*Escrever um programa que leia dois vetores de 5 posições e faça a 
multiplicação dos elementos de mesmo índice, colocando o resultado em um 
terceiro vetor. Mostrar o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5



void cadastraVetor(int vet[tam]){
	int i;
	for(i=0;i<tam;i++){
		printf("\nDigite um número inteiro %i: ", i+1);
		scanf("%i", &vet[i]);
	}
}

void multiplicaVetor(int vet[tam], int novoVetor[tam]){
	int i;
	for(i=0;i<tam;i++){
		novoVetor[i] = vet[i] * i;
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam], vetorFinal[tam], i;
	cadastraVetor(vetor);
	multiplicaVetor(vetor, vetorFinal);
	printf("\nVetor final: ");
	for(i=0;i<tam;i++){
		printf("%i ", vetorFinal[i]);
	}
}
