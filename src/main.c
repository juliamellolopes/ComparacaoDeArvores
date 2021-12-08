#include "respostas.h"

#include <time.h>
#include <string.h>

double get_random() { return ((double)rand() / (double)RAND_MAX *1000); }

void menu();
void entradas();
void pesquisas();
void criandoArquivos();

int main(){
	int arv = 0, entrada = 0, pesquisa = 0;
	clock_t tempo;
	tempo = clock();

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
		//resposta(arv, entrada, pesquisa);
		break;

	default:
		break;
	}
	
	printf("\nTempo: %f\n",(clock() - tempo) / (double)CLOCKS_PER_SEC);

	return 0;
}

void menu(){
	printf("\n1)Arvore Binaria\n");
	printf("2)Arvore AVL\n");
	printf("3)Arvore Red-Brack\n");
}

void entradas(){
	printf("\n1)Implementar arvore com 1000 entradas\n");
	printf("2)Implementar arvore com 10.000 entradas\n");
	printf("3)Implementar arvore com 1.000.000 entradas\n");
}

void pesquisas(){
	printf("\n1)Pesquisar em arvore 5.000 itens\n");
	printf("2)Pesquisar em arvore 10.000 itens\n");
	printf("3)Pesquisar em arvore 100.000 itens\n");
}

//metodo feito para criar e preencher os arquivos com os dados de entrada e de pesquisa
void criandoArquivos(){
	FILE *file;
	double n = 0;
    srand(time(NULL)); 
	char array[100];

	file = fopen("Entrada1000.txt", "w");

    for(int i = 0; i < 1000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Entrada10000.txt", "w");

    for(int i = 0; i < 10000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	file = fopen("Entrada1000000.txt", "w");

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

	file = fopen("Pesquisa100000.txt", "w");

    for(int i = 0; i < 100000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);
}