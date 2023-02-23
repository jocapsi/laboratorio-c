#include <stdio.h>

//Nao use a funcao scanf em um programa real
//operadores: == (igual), <= (menor ou igual), >= (maior ou igual)
//> (maior), < (menor), != (diferente)
//&& (e), || (ou), ! (nao)

int main(void) {
	int num;

	printf("Digite um numero: \n");
	scanf("%d", &num);
	printf("Voce digitou o numero: %d\n", num);
	
	if (num == 1) {
		printf("Numero e igual a 1\n");
	}
	else if (num == 2) {
		printf("numero e igual a 2\n");
	}
	else {
		printf("numero nao e 3, 2 ou 1\n");
	}

	return 0;

}
