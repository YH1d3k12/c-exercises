#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Type a number: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf("\nThe number is even");
	}
	else {
		printf("\nThe number is odd");
	}
}