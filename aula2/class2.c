#include <stdio.h>
#include <stdbool.h>

int main() {
	int numero;
	numero = 10;
	float pi = 3.1415;
	short int a, b, c;
	a = 1 + 1;
	b = 2 - 2;
	c = 3 % 1;
	long int inteirolongo = 100;
	long long inteirolongolongo = 10*10;
	double meios = 3 /2;
	char yes = 'y';
	char *string1 = "Jonathan";
	char string2[] = "jonathanr";
	bool isTrue = true;

	printf("Numero: %d\n", numero);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("Pi = %f", pi);
	printf("longInt: %ld", inteirolongo);
	printf("longInt: %lld", inteirolongolongo);
	printf("3meio: %lf", meios);
	printf("yes: %c", yes);
	printf("string1: %s\n", string1);
	printf("string2: %s\n", string2);
	printf("isTrue: %d\n",isTrue);

	return 0;
	}
