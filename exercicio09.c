/*Escrever um programa que leia um vetor de 10 posições de elementos 
inteiros no main() e crie uma função que receba este vetor, gere o somatório 
dos valores do vetor e retorne o valor para o main(). No main() imprima o 
valor do somatório.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int somaValores(int vetor[tam]){
	int i, somaVetor=0;
	for(i=0;i<tam;i++){
		somaVetor+=vetor[i];
	}
	return somaVetor;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam], i, soma;
	for(i=0;i<tam;i++){
		printf("\nDigite um número inteiro %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	soma = somaValores(vetor);
	printf("\nSoma dos valores do vetor: %i", soma);
}
