#include "respostas.h"

double get_random() { return ((double)rand() / (double)RAND_MAX *1000); }

void menu();
void entradas();
void pesquisas();
void criandoArquivos();
// void correcao(TreeRB *root);

int main(){
	int arv = 0, entrada = 0, pesquisa = 0;
	clock_t tempoEntrada;
	clock_t tempoPesquisa;


	// TreeRB *root;
	// creatTreeRB(&root);
	// correcao(root);


	menu();
	scanf("%d",&arv);

	switch (arv)
	{
	case 1:
		entradas();
		scanf("%d",&entrada);
		pesquisas();
		scanf("%d", &pesquisa);
		resposta(arv, entrada, pesquisa, &tempoEntrada, &tempoPesquisa);
		break;
		
	case 2:
		entradas();
		scanf("%d",&entrada);
		pesquisas();
		scanf("%d", &pesquisa);
		resposta(arv, entrada, pesquisa, &tempoEntrada, &tempoPesquisa);
		break;

	case 3:
		entradas();
		scanf("%d",&entrada);
		pesquisas();
		scanf("%d", &pesquisa);
		resposta(arv, entrada, pesquisa, &tempoEntrada, &tempoPesquisa);
		break;

	default:
		break;
	}
	
	printf("\nTempo gasto para fazer a entrada: %f",(tempoEntrada) / (double)CLOCKS_PER_SEC);
	printf("\nTempo gasto para fazer a pesquisa: %f\n",(tempoPesquisa) / (double)CLOCKS_PER_SEC);

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

// void correcao(TreeRB *root){
// 	FILE *file1;
// 	//FILE *file;
// 	char linha[100];
// 	char *result;
// 	double valor;
// 	int cont =0;

// 	//file = fopen("teste.txt", "w");

// 	file1 = fopen("Arquivos/Entrada1000000.txt", "r");

// 	if(file1 == NULL)
// 		printf("Erro ao abrir\n");
// 	else {
// 		while(!feof(file1)) {
// 			result = fgets(linha, 100, file1);
// 			if(result){
// 				valor = atof(linha);
// 				insertTreeRB(&root, &valor, &cont);

// 				// sprintf(linha, "%6lf", valor);
// 				// strcat(linha, "\n");
// 				// fputs(linha, file);
// 			} 
// 		}
// 	}
// 	fclose(file1);
// 	//fclose(file);
// 	printf("%d\n", cont);
// }