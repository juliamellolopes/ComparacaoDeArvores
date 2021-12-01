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

  A partir das escolhas feitas no menu, serão enviados os dados para um metodo que vai dirigir-se para a resolução do problema no arquivo respostas.c e respostas.h. Analogo a isso, no arquivo de respostas.c é posssivel ver 27 metodos que correspondem as 27 possiblilidades de tipos de arvores e pesquisas.

### Resultados
