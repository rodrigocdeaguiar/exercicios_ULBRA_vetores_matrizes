/* Escrever um programa que leia um vetor de 5 posições de inteiros e crie a 
partir deste um segundo vetor (cópia do primeiro), substituindo os valores 
zeros do primeiro vetor, sempre que aparecerem, por 1. Mostrar os dois 
vetores.*/

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

void filtraVetor(int vet[tam], int novoVetor[tam]){
	int i;
	vet[tam] = novoVetor[tam];
	for(i=0;i<tam;i++){
		if(vet[i] == 0){
			novoVetor[i] = 1;
		}
		if(vet[i] != 0){
			novoVetor[i] = vet[i];
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam], vetorFinal[tam], i;
	cadastraVetor(vetor);
	printf("\nVetor 1: ");
	for(i=0;i<tam;i++){
		printf("%i ", vetor[i]);
	}
	filtraVetor(vetor, vetorFinal);
	printf("\nVetor 2: ");
	for(i=0;i<tam;i++){
		printf("%i ", vetorFinal[i]);
	}
}
