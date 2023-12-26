#include<stdio.h>
#include<conio.h>

# define tam 10

int veta[tam],vetb[tam],vetc[tam],x,y,cont;

main(){
      
       printf("Informe o vetor A:\n");
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&veta[x]);
       }
       
       printf("\n\nInforme o vetor B:\n");
       for (x= 0; x<tam; x++)
       {
            printf("Informe o valor da posicao %d do vetor: ",x);
            scanf("%d",&vetb[x]);
       }
       
       
       for (x= 0; x<tam; x++)
       {
         cont=0;
         for (y= 0; y<tam; y++)
             if (veta[x]==vetb[y])
                cont++;
         vetc[x]=cont;
        }
          
    
     printf("\n\nInforme o vetor C:\n");
     for (x= 0; x<tam; x++)
         printf("vetor C[%d]= %d\n", x+1,vetc[x]);
     getch();
}
