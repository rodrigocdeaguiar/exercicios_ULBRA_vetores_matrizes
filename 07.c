#include<stdio.h>
#include<conio.h>

# define tam 10

   int par[tam],impar[tam],x,n=1,contp=0,conti=0;
   
main(){
   	printf("Programa encerra quando digitado 0 ou quando um dos vetores estiver cheio \n\n");
     while (((n!=0) && (contp<tam)) && (conti <tam)) 
     {
     	  printf("Informe um numero inteiro positivo: ");
     	  scanf("%d",&n);
	     if (n != 0) 
            if (n % 2 == 0) 
	          {
	             par[contp]=n;
                contp++;
	          }
	         else
	          {
	            impar[conti]=n;
	            conti++;
	          }
     }
     
     printf("\n\nVetor PAR\n");
     for (x=0; x<contp; x++)
        printf("PAR [%d]= %d\n",x,par[x]);
        
     printf("\n\nVetor IMPAR\n");
     for (x=0; x<conti; x++)
        printf("IMPAR [%d]= %d\n",x,impar[x]);
        
     getch();
}
