	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que solicite ao usu�rio dois n�meros inteiros. Some todos os valores 
	   existentes entre esses dois n�meros. Utilize la�o de repeti��o! */
	
	int main(int argc, char *argv[]) {
		int i, n1, n2, soma;
		
		printf(" Digite o primeiro numero inteiro para comecar a contagem: ");
		scanf("%d", &n1);
		printf(" Digite o segundo numero inteiro para terminar a contagem: ");
		scanf("%d", &n2);
		
		for(i = n1; i <= n2; i++){
	      soma += i;	
		}
		printf(" A soma de todos os numeros e essa: %d", soma);
		return 0;
	}
