/****** implémentation : Pile .c *******/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "pile.h"
/*realisation des operations exportées par pile.h*/
struct element* creerpile (void) {
  return NULL;
}
unsigned vide (struct element* p) {
  return(p==NULL);
}
int dernier (struct element* p) {
  assert( !vide(p)) ;
  return(p->cle) ;
}
void empiler (int info, struct element** p) {
  struct element*q ;
  q=(struct element*) malloc(sizeof(struct element)) ;
    q->cle=info;
	q->suivant=*p;
  /*mise à jour*/
  *p=q;
}
void depiler(struct element **p) {
struct element *q;
assert(!vide(*p));
q=*p ;
*p=(*p) -> suivant ;
free(q) ;
}
