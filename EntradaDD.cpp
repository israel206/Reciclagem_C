#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
//	int var;
//	float var;
//	char var;
//	char var[10]
	
//	printf("Digite um dado:\n");
//	ler Inteiros  string %d, 
//	ler float ou casas decimais %f ou .2f casas
//	ler textos %s
//	tamb�m para ler Um caracteres %c
//	& verifica a regio�o na mem�ria
//	scanf("%c", &var);

//	scanf("%9s[^\n]s", var);
	
//	printf(" O valor digitado: %s.\n", var);

//	char texto[10];
//	
//	printf("Digite um dado:\n");
//	gets(texto);
//	
//	printf("Voc� digitou: %s.\n", texto);
	
	char texto[10];
	
	printf("Digite um dado:\n");
	fgets(texto, 10, stdin);
	
	printf("Voc� digitou: %s.\n", texto);
}
