#include<stdio.h>
#include<conio.h>

# define tam 20

int vet[tam], x, aux, cont=0;

main(){
       
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vet[x]);
       }
       
       
       printf("Informe um valor a ser pesquisado: ");
       scanf("%d",&aux);
      
      
       for (x=0; x<tam; x++)
         if (vet[x]==aux) 
            cont++;
          
     
     if (cont!=0)
          printf("\n\nExistem %d valores %d no vetor",cont,aux);
     else
          printf("\n\nValor %d nao encontrado.",aux);
     getch();
}
