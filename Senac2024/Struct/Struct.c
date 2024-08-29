#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 5

struct Aluno {
	char nome[255];
	int ra;
	int serie;
	char curso[100];
} aluno_estrutura; // 1° meio de declaração.

main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Métodos de criação de Struct");
	strcpy(aluno_estrutura.nome, "Djalma");
	aluno_estrutura.ra = 9999;

	prinft("Nome do Aluno: %s", aluno_estrutura.nome);
	printf("RA: %d", aluno_estrutura.ra);

	// 2° meio de declaração.
	struct Aluno aluno_estrutura2;

	// 3° meio de declaração.
	typedef struct Aluno  aluno_estrutura3;

	// Declarando um vetor de struct.
	struct Aluno aluno_estruturas[TAM];

	for(int i = 0; i < TAM; i++) {
		printf("Digite seu nome: ");
		
		// fgets no lugar de scanf porque scanf crasha com nomes compostos.
		fgets(aluno_estruturas[i].nome, sizeof(aluno_estruturas[i].nome), stdin);

		printf("Digite o RA: ");
		scanf("%d", &aluno_estruturas[i].ra);

		printf("Digite a serie: ");
		scanf("%d", &aluno_estruturas[i].serie);

		printf("Digite o nome do curso: ");
		getchar(); // Limpa o buffer.
		fgets(aluno_estruturas[i].curso, sizeof(aluno_estruturas[i].curso), stdin);
		getchar(); // Limpa o buffer.
	}

	printf("Relatorio dos Alunos");
	printf("-------------------------------\n");
	for (int i = 0; i < TAM; i++) {
		printf("Nome do Aluno: %s\n", aluno_estruturas[i].nome);
		printf("RA: %d\n", aluno_estruturas[i].ra);
		printf("Serie: %d\n", aluno_estruturas[i].serie);
		printf("Curso: %s\n", aluno_estruturas[i].curso);
		printf("-------------------------------\n");
	}
	system("PAUSE");
}