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

  Primeiro para serem feitos os arquivos com as entradas com os valores de 1000, 10.000 e 1.000.000 e os arquivos de pesquisa de 5000, 10.000 e 100.000 valores foi feito um metodo que abre arquivos, se não existir ele cria, e os preenche com a quantidade de valores requisitados.
  
  	void criandoArquivos(){
	FILE *file;
	double n = 0;
    srand(time(NULL)); 
	char array[1000];

	file = fopen("Entarda1000.txt", "w");

    for(int i = 0; i < 1000; i++) {
       	n = get_random(); 
		sprintf(array, "%6lf", n);
		strcat(array, "\n");
	   	fputs(array, file);  
    }

	fclose(file);

	FILE *file;
	double n = 0;
    srand(time(NULL)); 
	char array2[1000];

	file = fopen("Entarda10000.txt", "w");

    for(int i = 0; i < 10000; i++) {
       	n = get_random(); 
		sprintf(array2, "%6lf", n);
		strcat(array2, "\n");
	   	fputs(array2, file);  
    }

	fclose(file);

	FILE *file;
	char array3[1000000];

	file = fopen("Entarda1000000.txt", "w");

    for(int i = 0; i < 1000000; i++) {
       	n = get_random(); 
		sprintf(array3, "%6lf", n);
		strcat(array3, "\n");
	   	fputs(array3, file);  
    }

	fclose(file);

	char array4[5000];

	file = fopen("Pesquisa5000.txt", "w");

    for(int i = 0; i < 5000; i++) {
       	n = get_random(); 
		sprintf(array4, "%6lf", n);
		strcat(array4, "\n");
	   	fputs(array4, file);  
    }

	fclose(file);

	char array5[10000];

	file = fopen("Pesquisa10000.txt", "w");

    for(int i = 0; i < 10000; i++) {
       	n = get_random(); 
		sprintf(array5, "%6lf", n);
		strcat(array5, "\n");
	   	fputs(array5, file);  
    }

	fclose(file);

	char array5[1000000];

	file = fopen("Pesquisa1000000.txt", "w");

    for(int i = 0; i < 1000000; i++) {
       	n = get_random(); 
		sprintf(array5, "%6lf", n);
		strcat(array5, "\n");
	   	fputs(array5, file);  
    }

	fclose(file);
	}

### Resultados
