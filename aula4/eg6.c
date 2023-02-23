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
	
	if (num > 10) {
		printf("O numero que voce digitou e maior ou igual do que 10!\n");
	}
	else {
		printf("O numero que voce digitou e menor ou igual a 10!\n");
	}

	return 0;

}
