#include <stdio.h>
#include <locale.h>
#include <ctype.h>

struct Pessoa {
	char nome[40];
	int idade;
	char sexo;
};


void goToChurch(struct Pessoa p) {
	if (p.idade > 18 && toupper(p.sexo) == 'M') {
		printf("%s pode ir a igreja", p.nome);
	}
	else if (p.idade > 35 && toupper(p.sexo) == 'F') {
		printf("%s pode ir a igreja", p.nome);
	}
	else {
		printf("%s NÃO PODE IR A IGREJA SOZINHO(a), HEREGE", p.nome);
	}
}

main() {
	setlocale(LC_ALL, "Portuguese");
	
	struct Pessoa p1;
	strcpy(p1.nome, "Djalma Hideki Yamamoto");
	p1.idade = 21;
	p1.sexo = 'M';
	
	printf("\n");
	goToChurch(p1);
	
	struct Pessoa p2;
	strcpy(p2.nome, "Natasha Michiko Yamamoto");
	p2.idade = 24;
	p2.sexo = 'F';
	
	printf("\n");
	goToChurch(p2);
}