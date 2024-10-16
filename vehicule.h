#ifndef VEHICULE_H
#define VEHICULE_H

typedef struct vehicule {
    char nom_modele[20];
    int puissance;
    float vitesse_max;
}vehicule;
void init_vehicule(vehicule *v);
struct vehicule *init_vehicule2();
void afficher_vehicule(vehicule *v);
#endif