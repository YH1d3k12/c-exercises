#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 10;
	int *p;
	
	p = &i; // Ponteiro p aponta para o endereço de i.
	
	printf("O valor de i é: %d", i);
	printf("\nO valor apontado por p é: %d", *p);
	printf("\nO endereço de i armazenado em p é: %d", p);
	
	*p = 20; // Modificando o valor apontado por p para 20.
	
	printf("\n\nApós modificar o valor apontado por p");
	printf("\nO valor de i é: %d", i);
	printf("\nO valor apontado por p é : %d", *p);
	printf("\nO endereço de i armazenado em p é: %d", p);
}		