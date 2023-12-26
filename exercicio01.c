/* Escrever um programa que leia um vetor de 10 posi��es de inteiros e 
apresente o somat�rio e a m�dia aritm�tica de todos os valores.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define tam 10

void lerNumeros(int num[tam]){
	int i;
	for(i=0;i<tam;i++){
		printf("\nDigite um n�mero inteiro (%i): ", i+1);
		scanf("%i", &num[i]);
	}
}

int calculaSoma(int num[tam]){
	int i, soma = 0;
	for(i=0;i<tam;i++){
		soma += num[i];
	}
	return soma;
}

float calculaMedia(int num[tam]){
	int i, soma = 0;
	for(i=0;i<tam;i++){
		soma += num[i];
	}
	return soma/tam;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[tam];
	lerNumeros(numeros);
	printf("\nSoma: %i", calculaSoma(numeros));
	printf("\nM�dia: %.2f", calculaMedia(numeros));
	
}
