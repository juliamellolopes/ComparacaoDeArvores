#include "respostas.h"

//metodo que chama o metodo com a resposta da opção escolhida
void resposta(int arv, int entrada, int pesquisa){
	if(arv == 1 && entrada == 1 && pesquisa == 1){
        metodo111();
	}else if(arv == 1 && entrada == 1 && pesquisa == 2){
        metodo112();
	}else if(arv == 1 && entrada == 1 && pesquisa == 3){
        metodo113();
	}else if(arv == 1 && entrada == 2 && pesquisa == 1){
        metodo121();
	}else if(arv == 1 && entrada == 2 && pesquisa == 2){
        metodo122();
	}else if(arv == 1 && entrada == 2 && pesquisa == 3){
        metodo123();
	}else if(arv == 1 && entrada == 3 && pesquisa == 1){
        metodo131();
	}else if(arv == 1 && entrada == 3 && pesquisa == 2){
        metodo132();
	}else if(arv == 1 && entrada == 3 && pesquisa == 3){
        metodo133();
	}else if(arv == 2 && entrada == 1 && pesquisa == 1){
        metodo211();
	}else if(arv == 2 && entrada == 1 && pesquisa == 2){
        metodo212();
	}else if(arv == 2 && entrada == 1 && pesquisa == 3){
        metodo213();
	}else if(arv == 2 && entrada == 2 && pesquisa == 1){
        metodo221();
	}else if(arv == 2 && entrada == 2 && pesquisa == 2){
        metodo222();
	}else if(arv == 2 && entrada == 2 && pesquisa == 3){
        metodo223();
	}else if(arv == 2 && entrada == 3 && pesquisa == 1){
        metodo231();
	}else if(arv == 2 && entrada == 3 && pesquisa == 2){
        metodo232();
	}else if(arv == 2 && entrada == 3 && pesquisa == 3){
        metodo233();
	}else if(arv == 3 && entrada == 1 && pesquisa == 1){
        //metodo311();
	}else if(arv == 3 && entrada == 1 && pesquisa == 2){
        //metodo312();
	}else if(arv == 3 && entrada == 1 && pesquisa == 3){
        //metodo313();
	}else if(arv == 3 && entrada == 2 && pesquisa == 1){
        //metodo321();
	}else if(arv == 3 && entrada == 2 && pesquisa == 2){
   	 	//metodo322();
	}else if(arv == 3 && entrada == 2 && pesquisa == 3){
        //metodo323();
	}else if(arv == 3 && entrada == 3 && pesquisa == 1){
        //metodo331();
	}else if(arv == 3 && entrada == 3 && pesquisa == 2){
        //metodo332();
	}else if(arv == 3 && entrada == 3 && pesquisa == 3){
        //metodo333();
	}
}

//metodos que realizam a opção escolhida
void metodo111(){
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
	
	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo112(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo113(){
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

	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo121(){
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

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo122(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo123(){
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

	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo131(){
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

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo132(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo133(){
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

	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo211(){
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

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo212(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo213(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo221(){
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

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo222(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo223(){
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

	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo231(){	
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

	file2 = fopen("Arquivos/Pesquisa5000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 5000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo232(){
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

	file2 = fopen("Arquivos/Pesquisa10000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 10000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo233(){
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

	file2 = fopen("Arquivos/Pesquisa100000.txt", "r");

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

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 100000 pesquisas: %d\n", quant);
	printf("Entradas: %d \nPesquisas: %d", cont1,cont2);
}

void metodo311();

void metodo312();

void metodo313();

void metodo321();

void metodo322();

void metodo323();

void metodo331();

void metodo332();

void metodo333();