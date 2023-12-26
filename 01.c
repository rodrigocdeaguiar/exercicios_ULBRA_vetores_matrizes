#include<stdio.h>
#include<conio.h>

#define tam 10

int vet[tam]={1,2,3,4,5,6,7,8,9,10}, x, soma=0;

main(){
    
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vet[x]);
       }
       
       for (x= 0; x<tam; x++)
          soma+=vet[x]; // mesma coisa que soma=soma+vet[x];
         
       printf("\n\nVetor lido:\n");
       for(x=0; x<tam; x++)
                printf("Vetor[%d] = %d\n",x,vet[x]);
       
       printf("\nResultado da soma: %d\n",soma);
       
       
       printf("\n\nCalculo da soma: \n");
       for (x= 0; x<tam-1; x++)
         printf("%d + ",vet[x]);
       
       printf("%d = %d ",vet[tam-1],soma);

     getch();
}
