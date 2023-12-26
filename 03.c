#include<stdio.h>
#include<conio.h>

# define tam 20

int vet[tam], x, cont=0;

main(){
       
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vet[x]);
       }
       
     for (x= 0; x<tam; x++)
      if (vet[x]% 2 ==0) 
          cont++;
          
     
     printf("\n\nExistem %d valores pares no vetor",cont);
     getch();
}
