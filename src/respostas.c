#include "respostas.h"

//metodo que chama o metodo com a resposta da opção escolhida
void resposta(int arv, int entrada, int pesquisa, clock_t *tempoEntrada, clock_t *tempoPesquisa){
	if(arv == 1 && entrada == 1 && pesquisa == 1){
        metodo111(tempoEntrada, tempoPesquisa);
	}else if(arv == 1 && entrada == 1 && pesquisa == 2){
        metodo112(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 1 && pesquisa == 3){
        metodo113(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 2 && pesquisa == 1){
        metodo121(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 2 && pesquisa == 2){
        metodo122(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 2 && pesquisa == 3){
        metodo123(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 3 && pesquisa == 1){
        metodo131(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 3 && pesquisa == 2){
        metodo132(tempoEntrada,tempoPesquisa);
	}else if(arv == 1 && entrada == 3 && pesquisa == 3){
        metodo133(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 1 && pesquisa == 1){
        metodo211(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 1 && pesquisa == 2){
        metodo212(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 1 && pesquisa == 3){
        metodo213(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 2 && pesquisa == 1){
        metodo221(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 2 && pesquisa == 2){
        metodo222(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 2 && pesquisa == 3){
        metodo223(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 3 && pesquisa == 1){
        metodo231(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 3 && pesquisa == 2){
        metodo232(tempoEntrada,tempoPesquisa);
	}else if(arv == 2 && entrada == 3 && pesquisa == 3){
        metodo233(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 1 && pesquisa == 1){
        metodo311(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 1 && pesquisa == 2){
        metodo312(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 1 && pesquisa == 3){
        metodo313(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 2 && pesquisa == 1){
        metodo321(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 2 && pesquisa == 2){
   	 	metodo322(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 2 && pesquisa == 3){
    	metodo323(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 3 && pesquisa == 1){
        metodo331(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 3 && pesquisa == 2){
        metodo332(tempoEntrada,tempoPesquisa);
	}else if(arv == 3 && entrada == 3 && pesquisa == 3){
        metodo333(tempoEntrada,tempoPesquisa);
	}
}

//metodos que realizam a opção escolhida
//arvore binaria
void metodo111(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("1Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("2Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("\nQuantidade de pesquisa na arvore binaria com 1000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo112(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo113(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo121(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo122(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo123(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo131(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo132(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo133(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeB *raiz = CreateTreeBinaria();
  	TreeB *aux = CreateTreeBinaria();
	double valor;
	RecordB r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTreeBinaria(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

//arvore AVL
void metodo211(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo212(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo213(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo221(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 10000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo222(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo223(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 10000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo231(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;	
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo232(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo233(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	Tree *raiz = CreateTree();
  	Tree *aux = CreateTree();
	double valor;
	Record r;
	int quant = 0, cont1 = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)) {
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
				cont1++;
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file2)) {
			result = fgets(linha, 100, file2);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisa(&raiz, &aux, r, &quant);
				cont2++;
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore AVL com 1000000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

//arvore red-black
void metodo311(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000 dados de 5000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo312(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		tempo = clock();
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000 dados de 10000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo313(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();

	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000 dados de 100000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo321(clock_t *tempoEntrada, clock_t *tempoPesquisa){
		clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 10000 dados de 5000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo322(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 10000 dados de 10000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo323(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada10000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 10000 dados de 100000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo331(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000000 dados de 5000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo332(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000000 dados de 10000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo333(clock_t *tempoEntrada, clock_t *tempoPesquisa){
	clock_t tempo;
	FILE *file1;
	FILE *file2;
	char linha[100];
	char *result;
	TreeRB *root;
	TreeRB *aux;
	creatTreeRB(&root); 
	double valor;
	int cont1 = 0, quant = 0, cont2 = 0;

	file1 = fopen("Arquivos/Entrada1000000.txt", "r");
	tempo = clock();

	if(file1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file1)){
			result = fgets(linha, 100, file1);
			if(result){
				valor = atof(linha);
				insertTreeRB(&root, valor, &cont1);
			} 
		}
	}
	fclose(file1);

	*tempoEntrada = clock() - tempo;
	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");
	tempo = clock();
 
	if(file2 == NULL){
	 	printf("Erro ao abrir\n");
	}else {
	 	while(!feof(file2)) {
	 		result = fgets(linha, 100, file2);
	 		if(result){
	 			valor = atof(linha);
	 			search(root, &aux, valor, &quant, &cont2);
			}
		}
	}
	fclose(file2);

	*tempoPesquisa = clock() - tempo;

	printf("Quantidade de pesquisa na arvore red-black com 1000000 dados de 100000 pesquisas: %d\n", quant);	
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}
