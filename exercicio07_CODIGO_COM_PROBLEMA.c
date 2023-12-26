/*Fazer um programa que leia N valores numéricos inteiros e distribua-os entre 
dois vetores de 5 posições, separando os números positivos e negativos.
Termine a leitura quando um dos vetores resultantes estiver cheio. Mostrar 
os vetores (de positivos e negativos) ao final do processamento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cadastraNegativo(int *vetorNegativo[5], int numeroCadastrado, int *contNegativo){
	*vetorNegativo[contNegativo] = numeroCadastrado;
	*contNegativo+=1;
}

void cadastraPositivo(int *vetorPositivo[5], int numeroCadastrado, int *contPositivo){
	*vetorPositivo[contPositivo] = numeroCadastrado;
	*contPositivo+=1;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetPos[5], vetNeg[5], contPos=0, contNeg=0, i, num;
	while(contPos<5||contNeg<5){
		printf("\nDigite um número inteiro: ");
		scanf("%i", &num);
		if(num<0){
			cadastraNegativo(&vetNeg[5], num, &contNeg);
		}
		else{
			cadastraPositivo(&vetPos[5], num, &contPos);
		}
	}
	printf("\nVetor positivo: ");
	for(i=0;i<5;i++){
		printf("%i", vetPos[i]);
	}
	printf("\nVetor negativo: ");
	for(i=0;i<5;i++){
		printf("%i", vetNeg[i]);
	}
}
