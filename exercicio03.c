/*Fazer um programa que leia um vetor de 10 posições com números reais e 
depois, um número inteiro. Se o número for zero, terminar o programa. Se o 
número for 1, mostrar o vetor na ordem direta. Se o número for 2 mostrar o 
vetor na ordem inversa.*/

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

void Menu(int vet[tam]){
	int menu, j;
	printf("\nDigite um número, para as seguintes opções:");
	printf("\n0 - Encerrar o programa");
	printf("\n1 - Mostrar o vetor na ordem direta");
	printf("\n2 - Mostrar o vetor na ordem inversa");
	printf("\n");
	scanf("%i", &menu);
	if(menu==0){
		printf("\nObrigado por utilizar o programa! Pressione enter para encerrar!");
		getch();
	}
	if(menu==1){
		printf("\n");
		printf("\nVetor na ordem direta: ");
		for(j=0;j<tam;j++)
			printf("%i ", vet[j]);
	}
	if(menu==2){
		printf("\n");
		printf("\nVetor na ordem inversa: ");
		for(j=tam-1;j>=0;j--)
			printf("%i ", vet[j]);
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[tam];
	cadastraVetor(numeros);
	Menu(numeros);
}
