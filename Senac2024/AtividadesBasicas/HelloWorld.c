#include <stdio.h> // Importa o printf.
#include <locale.h> // Importa setlocale.
#include <stdbool.h> // Incluir valore booleanos.


main() {
	setlocale(LC_ALL, "Portuguese");
	
	int value = 10;
	
	// Variáveis
	int age = 21;
	float weight = 54.1;
	char letter = 'D';
	char name[22] = "Djalma Hideki yamamoto";
	bool isValid = 1;
	// false || 0
	// true || 1
	
	/* Print
	
	%d = valores inteiros
	%f = valores decimais
	%.1f = valores decimais (apenas uma casa).
	%.2f = valores deicimais (apenas duas casas).
	%c = caracteres
	%s = strings
		
	*/
	
	// Única variável.
	printf("Hello World %d", value);
	
	// Múltiplas variáveis.	
	printf("\nHello, my name is %s, the %c is silent. I'm a %d years old programmer, weighting %.1f kilos.", name, letter, age, weight);
	
	if (age >= 18) {
		printf("\n\nYou are legal age.");
	}
	else {
		printf("\n\nYou are a minor.");
	}
	
	switch (letter) {
		case 'A': {
			printf("\n\nA");
			break;
		}
		case 'D': {
			printf("\n\nD");
			break;
		}
	}
	
	// For no C deve ter a declaração do i fora do ().
//	int i;
//	for(i = 0; i < 10; i++) {
//		printf("\nIndex: %d", i);
//	}
//	
//	printf("\n\n------------------------------\n");
//	
//	i = 0;
//	while(i < 10) {
//		printf("\nIndex: %d", i);
//		i++;
//	}
//	
//	printf("\n\n------------------------------\n");
//	
//	i = 0;
//	do {
//		printf("\nIndex: %d", i);
//		i++;
//	} while (i < 10);

	printf("\n\nDigite uma nova idade: ");
	scanf("%d", &age);
	printf("\nNova idade: %d", age);
}