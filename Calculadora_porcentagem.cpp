#include <stdlib.h>
#include<stdio.h>

int main(){
	
	float porc,acres,desc,valor,resporc;
	
	printf("Digite o valor\n ");
	scanf("%f", &valor);
		
	printf("digite a porcentagem\n");
	scanf("%f", &porc);
	
	printf("%.1f ", valor * porc / 100);
}
