#include "tree.h"

TreeB* CreateTreeBinaria(){
	return NULL;
}

void insertTreeBinaria(TreeB **t, RecordB r){

  if(*t == NULL){
    *t = (TreeB*)malloc(sizeof(TreeB));
    (*t)->esq = NULL; 
    (*t)->dir = NULL; 
    (*t)->reg = r; 
  
  } else {
    
    if(r.key < (*t)->reg.key){
      insertTreeBinaria(&(*t)->esq, r);
    }
    
    if(r.key > (*t)->reg.key){
      insertTreeBinaria(&(*t)->dir, r);
    }
  
  }

}

void pesquisaBinaria(TreeB **t, TreeB **aux, RecordB r, int *quant){

  if(*t == NULL){
    printf("[ERROR]: Node not found!");
    return;
  }
  (*quant)++;

  if((*t)->reg.key > r.key){ pesquisaBinaria(&(*t)->esq, aux, r, quant); return;}
  if((*t)->reg.key < r.key){ pesquisaBinaria(&(*t)->dir, aux, r, quant); return;}

  *aux = *t;
}


int isInTreeBinaria(TreeB *t, RecordB r) {
  
  if(t == NULL){ 
    return 0;
  }
  
  return t->reg.key == r.key || isInTreeBinaria(t->esq, r) || isInTreeBinaria(t->dir, r);
}


void antecessorBinaria(TreeB **t, TreeB *aux){ 

	if ((*t)->dir != NULL){ 
		antecessorBinaria(&(*t)->dir, aux);
		return;
  }
  	
  aux->reg = (*t)->reg;
  aux = *t; 
  *t = (*t)->esq;
  free(aux);
} 


void removeTreeBinaria(TreeB **t, RecordB r){
	TreeB *aux;
  	
  	if (*t == NULL){ 
  		printf("[ERROR]: Record not found!!!\n");
    	return;
  	}

  	if (r.key < (*t)->reg.key){ removeTreeBinaria(&(*t)->esq, r); return; }
  	if (r.key > (*t)->reg.key){ removeTreeBinaria(&(*t)->dir, r); return; }

  	if ((*t)->dir == NULL){ 
  		aux = *t;  
  		*t = (*t)->esq;
    	free(aux);
    	return;
  	}

  	if ((*t)->esq != NULL){ antecessorBinaria(&(*t)->esq, *t); return; }

  	aux = *t;  
  	*t = (*t)->dir;
  	free(aux);
}
