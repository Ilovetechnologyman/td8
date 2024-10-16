#include <stdio.h>
#include <math.h>
#include "vehicule.h"
#include "pile.h"

int main(){
    vehicule *v;
    //la premiere version ne marche pas car le pointeur n'est pas renvoyé après l'éxécution de la premiere fonction
    v = init_vehicule2();
    vehicule * v0;
    vehicule *v1;
    vehicule *v2;
    v0 = init_vehicule2();
    v1 = init_vehicule2();
    afficher_vehicule(v0);
    printf("--------------- \n");
    afficher_vehicule(v2);
    printf("--------------- \n");
    init_pile();
    afficher_vehicule(v0);
    printf("--------------- \n");
    printf("test");
    empiler(v0);
    afficher_vehicule(v1);
    printf("--------------- \n");
    empiler(v1);
    v2 = depiler();
    afficher_vehicule(v2);
    printf("--------------- \n");
    return 0;
}

