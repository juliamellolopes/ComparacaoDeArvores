#ifndef TREE_H  
#define TREE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct RecordB RecordB;
typedef struct TreeB TreeB;

struct RecordB{
	double key;
	int value;
};

struct TreeB{
	RecordB reg;
	TreeB *esq, *dir;
};

TreeB* CreateTreeBinaria();

void insertTreeBinaria(TreeB **t, RecordB r);
void pesquisaBinaria(TreeB **t, TreeB **aux, RecordB r, int *quant);
int isInTreeBinaria(TreeB *t, RecordB r);

void antecessorBinaria(TreeB **t, TreeB *aux);

void preordem(TreeB *t);

#endif