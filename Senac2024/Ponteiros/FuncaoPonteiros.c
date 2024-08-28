#include <stdio.h>

int multiplicar(int *x, int *y);


main() {
	int num1 = 3;
	int num2 = 5;
	int resultado = 0;
	
	resultado = multiplicar(&num1, &num2);
	printf("Resultado: %d", resultado);
	printf("\nNum1 alterado no endereço: %d", num1);
}

// Função que recebe o endereço da memória.
// Passagem de parametro por referência.
int multiplicar(int *x, int *y) {
	*x = 20; // Alterando x no endereço. 
	return *x * *y;
}