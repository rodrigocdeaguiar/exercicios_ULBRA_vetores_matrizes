/*Escrever um programa que leia um vetor de 15 elementos inteiros e encontre 
e mostre o maior valor par e a sua posi��o no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 15

void cadastraVetor(int vet[tam]){
	int i;
	for(i=0;i<tam;i++){
		printf("\nDigite um n�mero inteiro %i: ", i+1);
		scanf("%i", &vet[i]);
	}
}

void maiorPar(int vet[tam]){
	int maiorPar, posMaiorPar, i, contPar = 0;
	for(i=0;i<tam;i++){
		if(vet[i]%2==0){
			if(contPar==0){
				maiorPar = vet[i];
				posMaiorPar = i;
			}
			else{
				if(vet[i]>maiorPar)
					maiorPar = vet[i];
					posMaiorPar = i;
			}
			contPar++;
		}
	}
	printf("\nMaior n�mero par: %i, Posi��o no vetor: %i", maiorPar, posMaiorPar);
}

main(){
	int vetor[tam];
	setlocale(LC_ALL, "Portuguese");
	cadastraVetor(vetor);
	maiorPar(vetor);
}
