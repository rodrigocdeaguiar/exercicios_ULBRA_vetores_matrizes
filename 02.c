#include<stdio.h>
#include<conio.h>

# define tam 20

int vet[tam], x;

main(){
       
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vet[x]);
       }       
     for (x= 0; x<tam; x++)
     {
       if (vet[x]>20) 
          vet[x]=vet[x]*5;
       if (vet[x]<20) 
          vet[x]=vet[x]*2;
     }     
     
     printf("\n\nVetor modificado:\n");
     for (x= 0; x<tam; x++)
         printf("Vetor[%d]= %d\n",x,vet[x]);
     getch();
}
