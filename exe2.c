/*Programa: exe2.c
Programador: Marcelo Emanoel
Data: 22/03/2025
Descrição: este programa lê um numero que será a quantidade de matrículas a serem digitadas em um 
primeiro grupo de sequências de matrículas. Novamente, um segundo grupo de matrículas são digitadas.
Imprime se há ou não matrículas iguais nos dois grupos.*/
/*Bibliotecas utilizadas*/
#include<stdio.h>
#define TAMANHO 500

/*início da função principal*/
int main (void){

    /*declaração de variáveis*/
	int i, j, k;
	int tamA, tamB;
	int discA[TAMANHO], discB[TAMANHO], intAB[TAMANHO];

    /*lê o primeiro grupo de numeros e arrays*/
	scanf("%d\n", &tamA);

	for (i = 0; i < tamA; i++){
		scanf("%d", &discA[i]);
	}

    /*lê o primeiro grupo de numeros e arrays*/
	scanf("%d\n", &tamB);

	for (i = 0; i < tamB; i++){
		scanf("%d", &discB[i]);
	}

    /*compara os elementos de cada grupo*/
	k = 0;

	for (i = 0; i < tamA; i++){
		for (j = 0; j < tamB; j++){
			if (discA[i] == discB[j]){
				intAB[k] = discA[i];
				k += 1;
				break;//evita repetições de numeros
			}/*fim do if*/
		}
	}

    /*imprime os elementos da interseção*/
	if (k == 0){
		printf("vazia\n");
	}/*fim do if*/
	
	else{
		for (i = 0; i < k; i++){//imprime elementos da interseção
			printf("%d ", intAB[i]);
		}/*fim do for*/
		printf("\n");
	}/*fim do else*/

return 0;

}/*fim da função principal*/