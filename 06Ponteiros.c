#include <stdio.h>


main(){
	int idade;
	float peso;
	
	// Variável especial para receber enderço de memória do ponteiro.
	int *pIdade; 
	float *pPeso;
	
	pIdade = &idade;
	pPeso = &peso;

	idade = 45;
	peso = 79.5;
	
	printf("\nIdade: %d", idade);
	// Printa o endereço da memória.
	printf("\nEndereco: %d", &idade);
	printf("\nValor pIdade: %d", pIdade);
	printf("\nEndereco pIdade: %d", &pIdade);
	printf("\nAcessando valor de idade atravez de pIdade: %d", *pIdade);
	
	printf("\n\nPeso: %.2f", peso);
	printf("\nEndereco: %d", &peso);
	printf("\nValor pPeso: %d", pPeso);
	printf("\nEndereco pPeso: %d", &pPeso);
	printf("\nAcessando valor de peso atravez de pPeso: %.2f", *pPeso);
}