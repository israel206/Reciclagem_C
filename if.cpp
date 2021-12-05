#include <stdio.h>

int main(){
	
	int dado = 10;
	
//	printf("Digite um valor entre 1 e 10:\n");
//	printf("Digite um valor entre 1 ou 2:\n");
	printf("Digite algo diferente de 0:\n");
	scanf("%d", &dado);
	
	// x pertence [1,10]
	// operadores !=, >=, <=,
	// e = &&
//	if(dado >= 1 && dado <= 10){
//		printf("Vlor correto.\n");
//	}
	// ou = ||
//	if(dado == 1 || dado == 2){
//		printf("Valor correto.\n");
//	}

//	if(!(dado == 0)){
//		printf("Valor correto.\n");
//	}
	
	if(dado == 0){
		printf("Valor correto.\n");
	} else {
		printf("Valor correto.\n");
	}
}
