#include "respostas.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double get_random() { return ((double)rand() / (double)RAND_MAX *1000); }

void menu();
void entradas();
void pesquisas();
void criandoArquivos();

int main(){
	int arv = 0, entrada = 0, pesquisa = 0;
	clock_t tempo;
	tempo = clock();

	do
	{
		menu();
		scanf("%d",&arv);

		switch (arv)
		{
		case 1:
			entradas();
			scanf("%d",&entrada);
			pesquisas();
			scanf("%d", &pesquisa);
			resposta(arv, entrada, pesquisa);
			break;

		case 2:
			entradas();
			scanf("%d",&entrada);
			pesquisas();
			scanf("%d", &pesquisa);
			resposta(arv, entrada, pesquisa);
			break;

		case 3:
			entradas();
			scanf("%d",&entrada);
			pesquisas();
			scanf("%d", &pesquisa);
			resposta(arv, entrada, pesquisa);
			break;

		default:
			break;
		}
	} while (arv != 4);
	
	printf("\n\nTempo: %f",(clock() - tempo) / (double)CLOCKS_PER_SEC);

/*

*/
	return 0;
}

void menu(){
	printf("1)Arvore Binaria\n");
	printf("2)Arvore AVL\n");
	printf("3)Arvore Red-Brack\n");
	printf("4)Sair\n");
}

void entradas(){
	printf("1)Implementar arvore com 1000 entradas");
	printf("2)Implementar arvore com 10.000 entradas");
	printf("3)Implementar arvore com 1.000.000 entradas");
	printf("4)Voltar");
}

void pesquisas(){
	printf("1)Pesquisar em arvore 5.000 itens");
	printf("2)Pesquisar em arvore 10.000 itens");
	printf("3)Pesquisar em arvore 100.000 itens");
	printf("4)Voltar");
}

//metodo feito para criar e preencher os arquivos com os dados de entrada e de pesquisa
void criandoArquivos(){
	FILE *file;
	char linha[10];
	char *result;

	// ==============================
	// ESCRITA
	// ==============================

	file = fopen("arquivo.txt", "w");

	fputs("456.551634\n", file);
	fputs("320.117525\n", file);
	fputs("74.682345\n", file);
	fputs("506.254504\n", file);

	char array[50];
	double num = 264.553233;

	sprintf(array, "%.6lf", num);
	strcat(array, "\n");

	fputs(array, file);

	fputs("275.001674\n", file);
	fputs("740.643421\n", file);

	fclose(file);

	// ==============================
	// LEITURA
	// ==============================
	
	file = fopen("arquivo.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 50, file);

			if(result)
				printf("%s", linha);
		}
	}
	fclose(file);

	//double n = 0;
    //int cont = 0;
    srand(time(NULL)); // randomize seed

    for(int i=0; i < 10000; i++) {
       // n = get_random(); // call the function to get a different value of n every time
       // printf("%f\t", n);  // print your numbe

    }
}