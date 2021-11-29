#include "tree.h"

Tree* CreateTreeBinaria(){
	return NULL;
}

void insertTreeBinaria(Tree **t, Record r){

  if(*t == NULL){
    *t = (Tree*)malloc(sizeof(Tree));
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

void pesquisaBinaria(Tree **t, Tree **aux, Record r){

  if(*t == NULL){
    printf("[ERROR]: Node not found!");
    return;
  }

  if((*t)->reg.key > r.key){ pesquisaBinaria(&(*t)->esq, aux, r); return;}
  if((*t)->reg.key < r.key){ pesquisaBinaria(&(*t)->dir, aux, r); return;}

  *aux = *t;
}


int isInTreeBinaria(Tree *t, Record r) {
  
  if(t == NULL){ 
    return 0;
  }
  
  return t->reg.key == r.key || isInTreeBinaria(t->esq, r) || isInTreeBinaria(t->dir, r);
}


void antecessorBinaria(Tree **t, Tree *aux){ 

	if ((*t)->dir != NULL){ 
		antecessorBinaria(&(*t)->dir, aux);
		return;
  }
  	
  aux->reg = (*t)->reg;
  aux = *t; 
  *t = (*t)->esq;
  free(aux);
} 


void removeTreeBinaria(Tree **t, Record r){
	Tree *aux;
  	
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

void preordem(Tree *t)
{
  if(!(t == NULL)){
    printf("%d ", t->reg.key);
    preordem(t->esq); 
    preordem(t->dir); 
  }
}


void central(Tree *t)
{
  if(!(t == NULL)){
    central(t->esq); 
    printf("%d ", t->reg.key);
    central(t->dir); 
  }
}

void posordem(Tree *t)
{
  if(!(t == NULL)){
    posordem(t->esq); 
    posordem(t->dir); 
    printf("%d ", t->reg.key);
  }
}
