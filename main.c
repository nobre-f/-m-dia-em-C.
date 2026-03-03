#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v1;
	int v2;
	int v3;
	int media;
	
	printf("digite o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &v3);
	
	media=(v1+v2+v3)/3;
	printf(" A media dos tres valores e: %d\n", media);
	
	
	
	
	
	
	
	
	return 0;
}