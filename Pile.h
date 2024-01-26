/******* Partie interface : pile.h *******/
/*représentation physique*/
struct element {
  int cle ;
  struct element*suivant ;
} ;
/*opérations  ou services exporté*/
struct element* creerpile (void) ;
unsigned vide (struct element*) ;
int dernier (struct element*) ;
void empiler (int,struct element**) ;
void depiler (struct element**) ;
