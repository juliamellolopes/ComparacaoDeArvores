#ifndef TREE_H 
#define TREE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct Record Record;
typedef struct Tree Tree;

struct Record{
	int key;
	int value;
};

struct Tree{
	Record reg;
	Tree *esq, *dir;
};

Tree* CreateTreeBinaria();
void insertTreeBinaria(Tree **t, Record r);
void pesquisaBinaria(Tree **t, Tree **aux, Record r);
int isInTreeBinaria(Tree *t, Record r);

void removeTreeBinaria(Tree **t, Record r);
void antecessorBinaria(Tree **t, Tree *aux);

void preordem(Tree *t);
void central(Tree *t);
void posordem(Tree *t);

#endif