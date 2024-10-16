#include "pile.h"
#include <stdio.h>
#include <stdlib.h>
vehicule **tab;
int sommet = -1;
void init_pile(){
    tab = calloc(1024,sizeof(vehicule));
}
void empiler(vehicule *v){
    sommet++;
    tab[sommet] = v;
}

vehicule * depiler(){
    vehicule *sortie;
    sortie = tab[sommet];
    sommet--;
    return sortie;
}

