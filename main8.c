	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que solicite ao usu�rio um valor inteiro positivo. Em seguida, imprima 
	   uma �rvore de natal feita de asteriscos. A quantidade de linhas na �rvore de natal � dado pelo valor 
	   informado pelo usu�rio.*/
	
	int main(int argc, char *argv[]) {
		int i, j, usuario;
			
			printf(" Digite um numero inteiro positivo: ");
			scanf("%d.", &usuario);
			
			for(i = 1; i <= usuario; i++){
			  for(j = 1; j <= i; j++){
			    printf("*");		
			}	
			 printf("\n");
			}
		return 0;
	}
