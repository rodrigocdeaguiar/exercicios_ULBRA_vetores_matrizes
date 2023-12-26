/*Escrever um programa que leia um vetor de 10 elementos reais e encontre e 
mostre o menor e o maior elemento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

void cadastraVetor(int vet[tam]){
	int i;
	for(i=0;i<tam;i++){
		printf("\nDigite um número inteiro %i: ", i+1);
		scanf("%i", &vet[i]);
	}
}

void maiorNumero(int vet[tam]){
	int i, maiorNumero;
	for(i=0;i<tam;i++){
		if(i==0){
			maiorNumero = vet[i];
		}
		else{
			if(vet[i]>maiorNumero)
				maiorNumero = vet[i];
		}
	}
	printf("\nMaior número do vetor: %i", maiorNumero);
}

int menorNumero(int vet[tam]){
	int i, menorNumero;
	for(i=0;i<tam;i++){
		if(i==0){
			menorNumero = vet[i];
		}
		else{
			if(vet[tam]<menorNumero)
				menorNumero = vet[i];
		}
	}
	printf("\nMaior número do vetor: %i", menorNumero);
}


main(){
	int vetor[10];
	setlocale(LC_ALL, "Portuguese");
	cadastraVetor(vetor);
	maiorNumero(vetor);
	menorNumero(vetor);
}
