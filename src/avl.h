#ifndef AVL_H
#define AVL_H

#include<stdio.h>
#include<stdlib.h>

typedef struct Record Record;
typedef struct Tree Tree;

struct Record{
	double key;
	int value;
};

struct Tree{
	Record reg;
	Tree *esq, *dir;
	int weight;
};

Tree* CreateTree();
void insertTree(Tree **t, Record r);
void pesquisa(Tree **t, Tree **aux, Record r, int *quant);
int isInTree(Tree *t, Record r);

void antecessor(Tree **t, Tree *aux);
void rebalanceTree(Tree **t);

int getWeight(Tree **t);
int getMaxWeight(int left, int right);


void rotacaoSimplesDireita(Tree **t);
void rotacaoSimplesEsquerda(Tree **t);
void rotacaoDuplaDireita(Tree **t);
void rotacaoDuplaEsquerda(Tree **t);

#endif
