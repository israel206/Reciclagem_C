#include <stdio.h>
// colocando acentos no caracteres
#include <locale.h>

//struct novo_tipo{
//	int dado;
//	float valor;
//};
//
//int main(){
//	struct novo_tipo variavel;
//	
//	variavel.dado = 10;
//	variavel.valor = 22.22;
//	
//	printf("%d %f", variavel.dado, variavel.valor);
//}

struct produto{
	int cod;
	float valor;
};

int main(){
	// colocando acentos no caracteres
	setlocale(LC_ALL, "Portuguese");
	
	struct produto p;
	
	printf("Digite o código do produto:\n");
	scanf("%d", &p.cod);
	
	printf("Digite o valor do produto em reais:\n");
	scanf("%f", &p.valor);
	
	printf("Os dados são:\n");
	printf("Código: %d.\n", p.cod);
	printf("Valor: R$ %.2f.\n", p.valor);
}
