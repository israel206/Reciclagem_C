#include <stdio.h>

int main(){
	
	// Vetores
//	int vet[5] = {10, 20, 30, 40, 50};
	
	//	printf("Conteúdo das posicao: %d %d %d %d %d", vet[0], vet[1], vet[2], vet[3], vet[4]);
	
//	int vet[5] = {10, 20, 30, 40, 50};
//	int i;
//
//	for(i = 0; i < 5; i++){
//		printf("%d ", vet[i]);
//	}
	
//	int vet[5] = {0, 0, 0, 0, 0};
//	int i;
//
//	for(i = 0; i < 5; i++){
//		printf("Insira o elemento da posicao %d: ", i);
//		scanf("%d", &vet[i]);
//	}
//	for(i = 0; i < 5; i++){
//		printf("%d ", vet[i]);
//	}

	// Matrizes
//	int mat[3][3] = {{1, 2, 3},
//					 {4, 5, 6},
//					 {7, 8, 9}};
//	i = linhas
//	j = colunas
//	int i, j;
//	
//	for(i = 0; i < 3; i++){
//		for(j = 0; j < 3; j++){
//			printf("%d ", mat[i][j]);
//		}
//		printf("\n");
//	}
	
	int mat[4][4][4] = {{1, 2, 3, 4},
					 	{4, 5, 6, 5},
					 	{7, 8, 9, 7},
						{0, 0, 0, 3}};
//	i = linhas
//	j = colunas
	int i, j, k;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			for(k = 0; k < 4; k++)
			printf("%d ", mat[i][j][k]);
		}
		printf("\n");
	}
	
	
}
