
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct estrutura_jogadores

{
	int num;	// número da camisa
	float p;	//peso
	float a;	// altura
	char nome[2];	// inicial do nome

};

//struct estrutura_jogadores  jogador;//variavel jogador

//int i;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	struct estrutura_jogadores jogador[3];	//variavel jogador

	int i;

	int mais_baixo;
	int mais_alto;
	int mais_gordo;
	int mais_magro;
	int indice[0];

	for (i = 0; i <= 2; i++)
	{
		printf("------------------------------------");
		printf("         Cadastro Jogadores         ");
		printf("------------------------------------\n");
		fflush(stdin);

		printf("\nDigite a inicial do primeirno nome:");
		fflush(stdin);
		scanf("%s", &jogador[i].nome);

		printf("\nDigite o número da camisa;");
		scanf("%i", &jogador[i].num);
		fflush(stdin);

		printf("\nDigite a altura em cm:");
		scanf("%f", &jogador[i].a);
		fflush(stdin);

		printf("\nDigite o peso");
		scanf("%f", &jogador[i].p);
		fflush(stdin);
	}

	for (i = 0; i <= 2; i++)
	{
		printf("\n\nJogador de Inicial: %s, numero: %.2i, altura: %3.0f, peso: %3.0f\n", jogador[i].nome, jogador[i].num, jogador[i].a, jogador[i].p);
	}

	return 0;
}
