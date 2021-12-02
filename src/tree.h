#ifndef TREE_H  
#define TREE_H

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
};

Tree* CreateTreeBinaria();
void insertTreeBinaria(Tree **t, Record r);
void pesquisaBinaria(Tree **t, Tree **aux, Record r, int *quant);
int isInTreeBinaria(Tree *t, Record r);

void removeTreeBinaria(Tree **t, Record r);
void antecessorBinaria(Tree **t, Tree *aux);

#endif