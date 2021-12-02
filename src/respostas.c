#include "respostas.h"

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
        metodo123()
	}else if(arv == 1 && entrada == 3 && pesquisa == 1){
        metodo131();
	}else if(arv == 1 && entrada == 3 && pesquisa == 2){
        metodo132();
	}else if(arv == 1 && entrada == 3 && pesquisa == 3){
        metodo133();
	}else if(arv == 2 && entrada == 1 && pesquisa == 1){
        //mmetodo 211
	}else if(arv == 2 && entrada == 1 && pesquisa == 2){
        //metodo 212
	}else if(arv == 2 && entrada == 1 && pesquisa == 3){
        //metodo 213
	}else if(arv == 2 && entrada == 2 && pesquisa == 1){
        //metodo 221
	}else if(arv == 2 && entrada == 2 && pesquisa == 2){
        //metodo 222
	}else if(arv == 2 && entrada == 2 && pesquisa == 3){
        //metodo 223
	}else if(arv == 2 && entrada == 3 && pesquisa == 1){
        //metodo 231
	}else if(arv == 2 && entrada == 3 && pesquisa == 2){
        //metodo 232
	}else if(arv == 2 && entrada == 3 && pesquisa == 3){
        //metodo 233
	}else if(arv == 3 && entrada == 1 && pesquisa == 1){
        //mmetodo 311
	}else if(arv == 3 && entrada == 1 && pesquisa == 2){
        //metodo 312
	}else if(arv == 3 && entrada == 1 && pesquisa == 3){
        //metodo 313
	}else if(arv == 3 && entrada == 2 && pesquisa == 1){
        //metodo 321
	}else if(arv == 3 && entrada == 2 && pesquisa == 2){
        //metodo 322
	}else if(arv == 3 && entrada == 2 && pesquisa == 3){
        //metodo 323
	}else if(arv == 3 && entrada == 3 && pesquisa == 1){
        //metodo 331
	}else if(arv == 3 && entrada == 3 && pesquisa == 2){
        //metodo 332
	}else if(arv == 3 && entrada == 3 && pesquisa == 3){
        //metodo 333
	}
}

void metodo111(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa5000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 5000 pesquisas: %d\n", quant);
}

void metodo112(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 10000 pesquisas: %d\n", quant);
}

void metodo113(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa100000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000 dados de 100000 pesquisas: %d\n", quant);
}

void metodo121(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa5000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 5000 pesquisas: %d\n", quant);
}

void metodo122(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 10000 pesquisas: %d\n", quant);
}

void metodo123(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa100000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 10000 dados de 100000 pesquisas: %d\n", quant);
}

void metodo131(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa5000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 5000 pesquisas: %d\n", quant);
}

void metodo132(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa10000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 10000 pesquisas: %d\n", quant);
}

void metodo133(){
	FILE *file;
	char linha[100];
	char *result;
	Tree *raiz = CreateTreeBinaria();
  	Tree *aux = CreateTreeBinaria();
	double valor;
	Record r;
	int quant = 0;

	file = fopen("Arquivos/Entradas1000000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.key = valor;
				insertTree(&raiz, r);
			} 
		}
	}
	fclose(file);

	file = fopen("Arquivos/Pesquisa100000.txt", "r");

	if(file == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(file)) {
			result = fgets(linha, 100, file);
			if(result){
				valor = atof(linha);
				r.value = valor;
				pesquisaBinaria(&raiz, &aux, r, &quant);
			}
		}
	}
	fclose(file);

	printf("Quantidade de pesquisa na arvore binaria com 1000000 dados de 100000 pesquisas: %d\n", quant);
}

void metodo211();
void metodo212();
void metodo213();
void metodo221();
void metodo222();
void metodo223();
void metodo231();
void metodo232();
void metodo233();
void metodo311();
void metodo312();
void metodo313();
void metodo321();
void metodo322();
void metodo323();
void metodo331();
void metodo332();
void metodo333();