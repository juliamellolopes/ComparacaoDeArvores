//#include "respostas.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

double get_random() { return ((double)rand() / (double)RAND_MAX *1000); }

void menu();
void entradas();
void pesquisas();
void criandoArquivos();

int main(){
	//int arv = 0, entrada = 0, pesquisa = 0;
	//clock_t tempo;
	//tempo = clock();

/*
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
	
	//printf("\n\nTempo: %f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
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
}

void pesquisas(){
	printf("1)Pesquisar em arvore 5.000 itens");
	printf("2)Pesquisar em arvore 10.000 itens");
	printf("3)Pesquisar em arvore 100.000 itens");
}

//metodo feito para criar e preencher os arquivos com os dados de entrada e de pesquisa
void criandoArquivos(){
	FILE *file;
	double n = 0;
    srand(time(NULL)); 
	char array[100];

	file = fopen("Entarda1000.txt", "w");

    for(int i = 0; i < 1000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Entarda10000.txt", "w");

    for(int i = 0; i < 10000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Entarda1000000.txt", "w");

    for(int i = 0; i < 1000000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Pesquisa5000.txt", "w");

    for(int i = 0; i < 5000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Pesquisa10000.txt", "w");

    for(int i = 0; i < 10000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Pesquisa1000000.txt", "w");

    for(int i = 0; i < 1000000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);
}