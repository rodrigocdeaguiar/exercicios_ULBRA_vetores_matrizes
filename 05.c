#include<stdio.h>
#include<conio.h>

# define tam 20

float vet[tam];
int x, maior, pos;

main(){
       
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%f",&vet[x]);
       }
       
       maior=vet[0];
       pos=0;
       for (x=0; x<tam; x++)
         if (vet[x]>maior)
         { 
            maior=vet[x];
            pos=x;
         }
          
     
     printf("\n\nO maior valor do vetor eh %i e esta na posicao %d",maior,pos);
     getch();
}
