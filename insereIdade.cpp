#include <stdio.h>

int main(){
	
	int idade, idade_nova;
	
	printf("Insira a sua idade:\n");
	scanf("%d", &idade);
	
	idade_nova = idade + 1;
	
	printf("No ano que vem voce tera %d anos.", idade_nova);
	
}
