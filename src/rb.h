#ifndef DEF_HEADER_H
#define	DEF_HEADER_H

#include <stdio.h>
#include <stdlib.h>

enum type {black, red};
typedef struct TreeRB TreeRB;

struct TreeRB {
	enum type color;
	double key;
	TreeRB *LC, *RC, *P;
};

void insertTreeRB(TreeRB **raiz, double data, int *cont1);

void creatTreeRB(TreeRB **root);

void Left_Rotate(TreeRB *x, TreeRB **root);
void Right_Rotate(TreeRB *y, TreeRB **root);
void fix_insert(TreeRB *aux, TreeRB **root);
void rb_insert(TreeRB *x,TreeRB *y,TreeRB *temp, TreeRB **root);
void RB_transplant(TreeRB *aux,TreeRB *auxchild, TreeRB **root);

TreeRB *tree_successor(TreeRB *aux_succ);

void search(TreeRB *root, TreeRB **aux, double z, int *quant,  int *cont2);

int check(TreeRB *aux, double z,int chk);

#endif