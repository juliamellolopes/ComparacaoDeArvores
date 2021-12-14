<h1 align="center">Trabalho: Comparação de Arvores</h1>
Nesse trabalho poderemos teremos um algoritmo que possibilita ver o custo de tempo gasto de 3 tipos de arvores para efetuar o preenchimento da avore e a pesquisa de alguns valores. No algoritmo sera possivel escolher o a arvore, o numero de dados que quer preencher nela e depois os dados a serem pesquisados, só sera possivel ver o resultado de uma arvore de cada vez no algoritmo. Aqui sera possivel ver como foi desenvolvido o codigo e o resultado encontrado.

### Sumário
<!--ts-->
   * [Copilação](#Copilação)
   * [ExplicaçãoDoCodigo](#ExplicaçãoDoCodigo)
   * [Resultados](#Resultados) 
   		* [ArvoreBinaria](#ArvoreBinaria)
   		* [ArvoreAVL](#ArvoreAVL)
   		* [ArvoreRed-Black](#ArvoreRed-Black)
   * [Conclusão](#Conclusão)  
<!--te-->

### Copilação

 Programação feita em C, terminal Ubunto na plataforma Visual Studio Code, no Windows 10. Abra o arquivo Mikefile e copile:
	
    make clean
    make
    make run
  
### ExplicaçãoDoCodigo

  Nesse topico sera explicado cada etapa realizada para o desenvolvimento do codigo. É importante resaltar que por enquanto só é possivel fazer um teste por vez no codigo, sera necessário testar 27 vezes para pegar todos os resultados, que seram discutidos no topico de Resultados. Se for possivel , no futuro, sera desenvolvido parar fazer varios testes. 

  Primeiro, para serem feitos os arquivos com as entradas com os valores de 1000, 10.000 e 1.000.000 e os arquivos de pesquisa de 5000, 10.000 e 100.000 valores foi feito um metodo que abre arquivos, se não existir ele cria, e os preenche com a quantidade de valores requisitados. Esse codigo vai ficar no main.c, mas a utilização é só para criar os arquivos e preeenchelos. Metodo com o codigo abaixo:
  
		void criandoArquivos();

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
		
		
  Os arquivos estaram na pasta Arquivos com os nomes: Entrada1000, Entrada10000, Entrada1000000, Pesquisa5000, Pesquisa10000, Pesquisa100000. Segundo, desenvolver o menu para selecionar o tipo de arvore, a quantidade de entrada e a quantidade de itens a serem pesquisados, como pode ser visto a abaixo:
  
  ![image](https://user-images.githubusercontent.com/84408875/144319848-8fe618dd-4640-4105-a7c7-f2eb4044bc67.png)

  A partir das escolhas feitas no menu, serão enviados os dados para um metodo que vai dirigir-se para a resolução do problema no arquivo respostas.c e respostas.h. Com o metodo abaixo:
  
      	resposta(arv, entrada, pesquisa, &tempoEntrada, &tempoPesquisa);
  
  Analogo a isso, no arquivo de respostas.c e .h é posssivel ver 27 metodos que correspondem as 27 possiblilidades de tipos de arvores e pesquisas. Abaixo é possivel ver um dos metodos usados para realizar a possibilidaded 1,1,1:

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

  Esse metodo cria uma arvore com 1000 dados, fara uma pesquisa de 5000 itens nela. 

  Ao finalizar o codigo sera impresso a quantidade de vezes que entrou na arvore para achar todos os intens, como a quantidade de entradas, itens pesquisados, o tempo gasto para adicionar os valores na avore e o tempo gasto para fazer a pesquisa. Abaixo sera possivel ver como aparecera:

   ![image](https://user-images.githubusercontent.com/84408875/145273554-95f7dcac-6e18-4f92-b009-eeb37844fdf0.png)

  Ultilizando um contador chamado quant sera possivel medir a quantidade de vezes que foi reita a pesquisa para acha os valores do aarquivo, é usado tambem a função clock_t foi possivel calcular o tempo de inserção dos dados a arvore e o tempo de pesquisa. O contador se encontra denro das estruturas de arvore, dentro do metodo de pesquisa, já os contadores de tempo estão dentro de cada metodo no arquivo respostas.c .

### Resultados

Nesse topico sera apresentados os resultados encontrados em tipo de arvore com suas diferentes implementações de entradas e pesquisas.

#### ArvoreBinaria:

Resultados de 1.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
 0.001240 | 0.005145 | 65000

Resultados de 1.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.001363 | 0.009780 | 130000

Resultados de 1.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
 0.001129 | 0.005021 | 1300000

Resultados de 10.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.013229 | 0.004959 | 65000

Resultados de 10.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.012798 | 0.009870 | 130000

Resultados de 10.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.012992 | 0.099874 | 1300000

Resultados de 1.000.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
2.054963 | 0.007182 | 165000

Resultados de 1.000.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
 2.134810 | 0.013101 | 330000

Resultados de 1.000.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
2.120398 | 0.135466 | 3300000

#### ArvoreAVL:

Resultados de 1.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.001129 | 0.005021 | 55000

Resultados de 1.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
 0.001897 | 0.010589 | 110000

Resultados de 1.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
 0.001800 | 0.009683 | 110000

Resultados de 10.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.021939 | 0.005371 | 65000

Resultados de 10.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.023178 | 0.011984 | 130000

Resultados de 10.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.023572 | 0.102352 | 1300000

Resultados de 1.000.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
3.538362 | 0.005707 | 95000

Resultados de 1.000.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
3.519760 | 0.010620 | 190000

Resultados de 1.000.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
3.634962 | 0.108947 | 1900000

#### ArvoreRed-Black:

Resultados de 1.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.001412 | 0.004448 | 51147

Resultados de 1.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.001257 | 0.008723 | 102289

Resultados de 1.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.001273 | 0.086125 | 1023064

Resultados de 10.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.012786 | 0.004578 | 68182

Resultados de 10.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.013422 | 0.008910 | 136161

Resultados de 10.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
0.012720 | 0.096815 | 1360819

Resultados de 1.000.000 entradas e 5.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
2.123798 | 0.008217 | 101972

Resultados de 1.000.000 entradas e 10.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
2.112824 | 0.015789 | 204087

Resultados de 1.000.000 entradas e 100.000 dados pesquisados:

Tempo de entrada |Tempo de Pesquisa    | Quantidade de pesquisas
:--------- | :------: | -------:
2.080260 | 0.211222 | 2037743

### Conclusão

Ao analisar os dados podemos fazer as seguintes graficos: 

![image](https://user-images.githubusercontent.com/84408875/146096434-bebb30e2-90d8-4bda-87c4-3264f1a0965a.png)
![image](https://user-images.githubusercontent.com/84408875/146096489-7abd23ed-1d4e-4ef5-9db7-5105383c9b8d.png)
As avl crescecom o tempo , e a binaria ser para entrada pequena , e rb entradas maiores
![image](https://user-images.githubusercontent.com/84408875/146096504-eb0da779-6525-42b1-ac8d-1b09bdca9110.png)
![image](https://user-images.githubusercontent.com/84408875/146097099-e0c472b2-e5ee-4f53-9816-d11a252179c9.png)
como os arquivos da ultima pesquisa não tinha todos os valores iguais ela não foi pecorrida toda para saber o tempo, a rb é melhor
o tempo crece a partir da quantidade realiazada

Analisando os graficos podemos conclui que a AVL tem um maio tempo de entrada e a binaria um maior tempo de pesquisa. Ja a red-black tem uma menor quantidade de pesquisas para achar os itens, como tambem menor tempo de entrada e pesquisa. Podemos então concluir que a melhor estrutura seria a red-black.


- 3.1) - Qual das estruturas é mais rápida para pesquisa e porquê?
	-

- 3.2) - Há diferença de tempo das inserções, o que afeta cada estrutura em termos de mecanismo de manipulação / balanceamento?
	-

- 3.3) - Considerando as três bases de entrada, para quais você indica cada uma das estruturas e porquê?
	- 
	
