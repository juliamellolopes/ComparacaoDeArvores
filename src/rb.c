#include "rb.h"

TreeRB *temp, *nill;

void creatTreeRB(TreeRB **root){
    nill        =(TreeRB *) malloc(sizeof(TreeRB));
    nill->color = black;
    nill->LC    = NULL;
    nill->RC    = NULL;
    nill->P     = NULL;
    nill->key   = 0;
    (*root)       = nill;
}

void insertTreeRB(TreeRB **root, double data, int *cont1) {
    double chk = 0;
    
    if ((temp = (TreeRB *) malloc(sizeof(TreeRB))) != NULL){
        temp->P     = nill;
        temp->LC    = nill;
        temp->RC    = nill;
        temp->key   = data;
        temp->color = black;
        chk         = check(*root,data,0);
        if(chk == 0){
            rb_insert(*root, nill, temp, root);
            (*cont1)++;
        }
        else{
             printf("Node already registered: %lf\n", data);   fflush(stdout);
            free(temp);
        }
    }
}

void Left_Rotate(TreeRB *x, TreeRB **root){
    TreeRB *y;
    y = x->RC;
    x->RC = y->LC;
    if (y->LC != nill)
        y->LC->P = x;
    y->P = x->P;
    if (x->P == nill)
        *root = y;
    else if (x == x->P->LC)
        x->P->LC = y;
    else if (x == x->P->RC)
        x->P->RC = y;
    y->LC = x;
    x->P  = y;
}

void Right_Rotate(TreeRB *y, TreeRB **root){
    TreeRB *x;
    x = y->LC;
    y->LC = x->RC;
    if (x->RC != nill)
        x->RC->P = y;
    x->P = y->P;
    if (y->P == nill)
        *root = x;
    else if (y == y->P->RC)
        y->P->RC = x;
    else if (y == y->P->LC)
        y->P->LC = x;
    x->RC = y;
    y->P  = x;
}

void fix_insert(TreeRB *aux, TreeRB **root){
    TreeRB *y;
    while (aux->P->color == red){	
        if (aux->P == aux->P->P->LC){
            y = aux->P->P->RC;
            if (y->color == red){				
                aux->P->color    = black;		
                y->color         = black;
                aux->P->P->color = red;
                aux              = aux->P->P;
            }
            else{
                if (aux == aux->P->RC){		
                    aux = aux->P;
                    Left_Rotate(aux, root);		
                }
                aux->P->color    = black;		
                aux->P->P->color = red;
                Right_Rotate(aux->P->P, root);
            }
        }
        else if (aux->P == aux->P->P->RC){
            y = aux->P->P->LC;
            if (y->color == red) {
                aux->P->color    = black;
                y->color         = black;
                aux->P->P->color = red;	
                aux              = aux->P->P;
            }
            
            else{
                if (aux == aux->P->LC){
                    aux = aux->P;
                    Right_Rotate(aux, root);
                }
                
                aux->P->color    = black;		
                aux->P->P->color = red;
                Left_Rotate(aux->P->P, root);
            }
        }
    }
    (*root)->color = black; 							
}

void rb_insert(TreeRB *x, TreeRB *y, TreeRB *temp, TreeRB **root){
    while (x != nill){				
        y = x;					
        if (temp->key < x->key)
            x = x->LC;
        else 
            x = x->RC;
    }
    temp->P=y;
    if (y == nill)                 			
        *root = temp;
    else if (temp->key < y->key)   
        y->LC = temp;
    else                            
        y->RC = temp;
    temp->LC    = nill;             
    temp->RC    = nill;
    temp->color = red;              
    fix_insert(temp, root);              
}

void RB_transplant(TreeRB *aux, TreeRB *auxchild, TreeRB **root){
    if (aux->P == nill)            
        *root = auxchild;
    else if (aux == aux->P->LC)     
        aux->P->LC = auxchild;      
    else 
    	aux->P->RC = auxchild;     
    auxchild->P = aux->P;	   
}

TreeRB *tree_successor(TreeRB *aux_succ){
    while (aux_succ->LC != nill)
        aux_succ = aux_succ->LC;
    return aux_succ;
}

void search(TreeRB *root, TreeRB **aux, double z, int *quant,  int *cont2){
    (*cont2)++;
    while (root != nill && z != (root)->key){
        if (z < (root)->key)
            root = (root)->LC;
        else 
            root = (root)->RC;
        (*quant)++;        
    }
    // if ((root)->key == z){
         *aux = root;
    // }
}

int check(TreeRB *aux, double z, int chk){
    while (aux != nill && z != aux->key){
        if (z < aux->key)
            aux = aux->LC;
        else 
            aux = aux->RC;
    }
    if (aux->key == z)
        chk = 1;
    return chk;
}

// void preordemRB(TreeRB *aux) {
//     if(aux != NULL && aux->key != 0) {
//         printf("%lf ", aux->key);
//         preordemRB(aux->LC);
//         preordemRB(aux->RC);
//     }
// }