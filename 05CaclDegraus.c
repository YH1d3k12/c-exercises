#include <stdio.h>
#include <locale.h>
#include <stdbool.h> // Incluir valores booleanos.

main() {
	setlocale(LC_ALL, "Portuguese");
	
    float alturaDegrau, alturaDesejada;
    int qtdDegraus;
    bool valido;

    printf("Digite a altura de cada degrau: ");
    do {
        valido = true;
        scanf("%f", &alturaDegrau);
        if (alturaDegrau <= 0) {
            printf("A altura do degrau deve ser maior que zero. Digite novamente: ");
            valido = false;
        }
    } while (!valido);


    printf("Digite a altura que deseja alcançar: ");
    do {
        valido = true;
        scanf("%f", &alturaDesejada);
        if (alturaDesejada <= 0) {
            printf("A altura deseja deve ser maior que zero. Digite novamente: ");
            valido = false;
        }
    } while(!valido);

	// Trunca a divisão, pegando somente o número inteiro.
    qtdDegraus = (int) (alturaDesejada / alturaDegrau);

    printf("Você precisará subir %d degraus para alcançar a altura desejada.", qtdDegraus);
}