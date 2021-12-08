<h1 align="center">Trabalho: Comaração de Arvores</h1>
Nesse trabalho poderemos teremos um algoritmo que possibilita ver o custo de tempo gasto de 3 tipos de arvores para efetuar o preenchimento da avore e a pesquisa de alguns valores. No algoritmo sera possivel escolher o a arvore, o numero de dados que quer preencher nela e depois os dados a serem pesquisados, só sera possivel ver o resultado de uma arvore de cada vez no algoritmo. Aqui sera possivel ver como foi desenvolvido o codigo e o resultado encontrado.

### Sumário
<!--ts-->
   * [Copilação](#Copilação)
   * [ExplicaçãoDoCodigo](#ExplicaçãoDoCodigo)
   * [Resultados](#Resultados)
<!--te-->

### Copilação

 Programação feita em C, terminal Ubunto na plataforma Visual Studio Code, no Windows 10. Abra o arquivo Mikefile e copile:
	
    make clean
    make
    make run
  
### ExplicaçãoDoCodigo

  Primeiro para serem feitos os arquivos com as entradas com os valores de 1000, 10.000 e 1.000.000 e os arquivos de pesquisa de 5000, 10.000 e 100.000 valores foi feito um metodo que abre arquivos, se não existir ele cria, e os preenche com a quantidade de valores requisitados. Esse codigo vai ficar no main.c, mas a utilização é só para criar os arquivos e preeenchelos. Metodo com o codigo abaixo:
  
  	void criandoArquivos();
		
  Os arquivos estaram na pasta Arquivos com os nomes: Entrada1000, Entrada10000, Entrada1000000, Pesquisa5000, Pesquisa10000, Pesquisa100000. A segunda parte é o menu para selecionar o tipo de arvore, a quantidade de entrada e a quantidade de itens a serem pesquisados, como pode ser visto a abaixo:
  
  ![image](https://user-images.githubusercontent.com/84408875/144319848-8fe618dd-4640-4105-a7c7-f2eb4044bc67.png)

  A partir das escolhas feitas no menu, serão enviados os dados para um metodo que vai dirigir-se para a resolução do problema no arquivo respostas.c e respostas.h. Com o metodo abaixo:
  
      resposta(arv, entrada, pesquisa);
  
  Analogo a isso, no arquivo de respostas.c é posssivel ver 27 metodos que correspondem as 27 possiblilidades de tipos de arvores e pesquisas. Abaixo é possivel ver um dos metodos usados para realizar uma das possiblidades

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

		if(file1 == NULL)
			printf("1Erro ao abrir\n");
		else {
			tempo = clock();
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

		if(file2 == NULL)
			printf("2Erro ao abrir\n");
		else {
			tempo = clock();
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

   Esse metodo cria uma arvore com 1000 dados, fara uma pesquisa de 5000 itens nela e no final imprimir a quantidade de vezes que entrou na arvore para achar todos os intens, como a quantidade de entradas, itens pesquisados, o tempo gasto para adicionar os valores na avore e o tempo gasto para fazer a pesquisa. Abaixo sera possivel ver como sera impresso os resultados:



### Resultados

