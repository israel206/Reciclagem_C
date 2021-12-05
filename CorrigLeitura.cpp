#include <stdio.h>

int main(){
	char str1[10];
	char str2[10];
	
	printf("Primeiro string:\n");
	scanf("%s", str1);
	fflush(stdin);
	
	printf("Segunda string:\n");
	fgets(str2, 10, stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(str1);
	puts(str2);
}
