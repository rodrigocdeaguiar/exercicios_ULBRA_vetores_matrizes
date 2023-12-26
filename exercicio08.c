/*Fazer um programa que leia dois vetores (A e B) de 6 posições e crie um 
terceiro vetor (C) com a interseção dos dois primeiros, isto é, coloque em C 
apenas os elementos que existem em A e que também existem em B. 
Mostrar C.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 6

void cadastraVetor(int vet[tam]){
	int i;
	for(i=0;i<tam;i++){
		printf("\nDigite um número inteiro %i: ", i+1);
		scanf("%i", &vet[i]);
	}
}

int intersecs(int vet1[tam], int vet2[tam]){
	int i, j, contInterSec=0;
	for(i=0; i<tam;i++){
		for(j=0; j<tam;j++)
			if(vet1[i]==vet2[j]){
				contInterSec++;
			}
			else{
				continue;
			}
	}
	return contInterSec;
}

void intersecVets(int vet1[tam], int vet2[tam], int vet3[tam]){
	int i, j, contInterSec=0;
	for(i=0; i<tam;i++){
		for(j=0; j<tam;j++)
			if(vet1[i]==vet2[j]){
				vet3[contInterSec] = vet1[i];
				contInterSec++;
			}
			else{
				continue;
			}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[tam], vet2[tam], vet3[tam*2], intersec, i;
	printf("\n____Cadastrar VETOR 1____");
	cadastraVetor(vet1);
	printf("\n____Cadastrar VETOR 2____");
	cadastraVetor(vet2);
	intersecVets(vet1, vet2, vet3);
	printf("\nVetor de interseção entre 1 e 2: ");
	intersec = intersecs(vet1, vet2);
	for(i=0;i<intersec;i++){
		printf("%i ", vet3[i]);
	}
}
