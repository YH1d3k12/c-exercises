#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 5

struct Pessoa {
	char nome[20];
    char cpf[11];
    int idade;
};

void createPessoa(struct Pessoa *pessoa);
void getPessoa(struct Pessoa *pessoa);

main() {
	setlocale(LC_ALL, "Portuguese");
    struct Pessoa listaPessoas[TAM];
    struct Pessoa *pPessoa = listaPessoas;

	createPessoa(pPessoa);
	getPessoa(pPessoa);
}

void createPessoa(struct Pessoa *pessoa) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite seu nome: ");
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
        getchar(); // Limpa o buffer.

        printf("Digite seu CPF: ");
        fgets(pessoa[i].cpf, sizeof(pessoa[i].cpf), stdin);
        getchar(); // Limpa o buffer.

        printf("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);
    }
};

void getPessoa(struct Pessoa *pessoa) {
    for (int i = 0; i < TAM; i++) {
        printf("Nome: %s\n", pessoa[i].nome);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("Idade: %d\n", pessoa[i].idade);
    }
};