#include <stdio.h>
#include <locale.h>

struct Aluno {
	char nome[40];
	int idade;
	float peso;
};

main() {
	setlocale(LC_ALL, "Portuguese");
	
	struct Aluno a1;
//	a1.nome = "Djalma Hideki Yamamoto"; Não funciona, tem que ser assim:
	strcpy(a1.nome, "Djalma Hideki Yamamoto");
	a1.idade = 21;
	a1.peso = 54.1;
	
	printf("Nome: %s\nIdade: %d\nPeso: %.2f", a1.nome, a1.idade, a1.peso);
}