#include<stdio.h>
#include<conio.h>

#define tam 6

int vet[tam], x, cont=0;

main(){
       
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vet[x]);
       }
       
     for (x= 0; x<tam; x++)
      if (vet[x]==5) 
          cont++;
          
   
     printf("\n\nExistem %d valores 5 no vetor lido.\n\n",cont);
     getch();
}
