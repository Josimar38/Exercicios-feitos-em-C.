	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que solicite ao usu�rio duas letras (tipo char). Imprima todos os s�mbolos 
	   existentes na tabela ASCII entre as letras digitadas pelo usu�rio. Considere que a primeira letra (digitada pelo 
	   usu�rio) sempre vir� antes da segunda letra.*/
	
	int main(int argc, char *argv[]) {
		char i, l, p;
		
		printf("Digite a primeira letra para imprimir: ");
		l = getchar();
		printf("Digite a ultima letra para imprimir: ");
		p = getchar();
		
		for(i = l; i <= p; i++){
			printf("%c\n", 'i');
		}
		
		return 0;
	}
