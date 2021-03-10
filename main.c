#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
	
	// Definindo variáveis:
	int a;
	int b;
	int c;
	
	// Solicitando ao usuário:
	printf("Entre com 3 numeros inteiros diferentes entre si \n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if (a > b && a >c) {
		printf(" O primeiro inteiro eh o maior");
	 }else if ( b > a && b > c){
	 	printf("O segundo inteiro eh o maior");
	 }else if (c > a && c > b){
        printf("O terceiro inteiro eh o maior");
	 }else if ( a < b && a < c){
	 	printf("O primeiro inteiro eh o menor");
     }else if ( b < a && b < c){
	 	printf("O segundo inteiro eh o menor");
	 }else if (c < a && c < b){
        printf("O terceiro inteiro eh o maior");
	
      }else {
      	printf("Comando inváliso");
	  }
}
