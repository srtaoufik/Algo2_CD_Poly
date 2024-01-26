#include<stdio.h> 
#include<stdlib.h>  
#include<assert.h> 
#include "pile.h" 

void creePile(void) {
	sommet=NULL ; 
} 
unsigned vide(void){
	return (sommet==NULL) ; 
} 
int dernier (){
	assert( ! vide()) ; 
	return ( sommet -> cle) ; 
} 
void empiler (int x) {
	struct element*p; 
	p=(struct element*)malloc(sizeof(struct element)) ; 
	(*p).cle=x ; 
	(*p).suivant=sommet ; 
	sommet=p ;
	
} 

void depiler(void) {
	struct element*p ; 
	assert ( !vide()) ; 
	p=sommet ; 
	sommet=(*sommet).suivant; 
	free(p) ;
 
} 








