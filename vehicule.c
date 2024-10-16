
#include <math.h>
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include "vehicule.h"

void init_vehicule(vehicule *v){
    srand(time(NULL));
    int aleatoire = rand();
    v->puissance = aleatoire;
    v->vitesse_max = (float ) aleatoire;
}


struct vehicule *init_vehicule2(){
    vehicule *v;
    v = malloc(sizeof(vehicule));
    int aleatoire = rand();
    v->puissance = aleatoire;
    v->vitesse_max = (float ) aleatoire;
    return v;
}

void afficher_vehicule(vehicule *v){
    printf(" la vitesse max est : %f \n", v->vitesse_max);
    printf("sa puissance est de %i \n",v->puissance);
}