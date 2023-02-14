#include <stdio.h>

//Mostra diferentes tamanhos em bytes de tipos de variaveis em C
int main(void) {
	int a;
	short int b;
	long int c;
	long long d;
	float e;
	double f;
	char g;


	printf("Tamanho do (int): %ld\n", sizeof(a));
	printf("Tamanho do (short int): %ld\n", sizeof(b));
	printf("Tamanho do (long int): %ld\n", sizeof(c));
	printf("Tamanho do (long long long int): %ld\n", sizeof(d));
	printf("Tamanho do (float): %ld\n", sizeof(e));
	printf("Tamanho do (double): %ld\n", sizeof(f));
	printf("Tamanho do (char): %ld\n", sizeof(g));

	unsigned int num1;
	unsigned long int num2;
	unsigned short int num3;
	unsigned long long int num4;
	
	num1 = 1;
	num2 = 2;
	num3 = 3;
	num4 = 4;

	printf("num1 = %u\n", num1);
	printf("num2 = %lu\n", num2);
	printf("num3 = %hu\n", num3);
	printf("num4 = %llu\n", num4);
	
	printf("Tamanho do (unsigned int): %ld\n", sizeof(num1));
	printf("Tamanho do (unsigned long int): %ld\n", sizeof(num2));
	printf("Tamanho do (unsigned short int): %ld\n", sizeof(num3));
	printf("Tamanho do (long long long int): %ld\n", sizeof(num4));
	
	return 0;
}
