#include "../lib/liste-c.h"
#include <stdio.h>

void affiche(ListeC liste){
    printf("[");
    int len=sizeLC(liste);
    for(int i=0; i<len-1; i++){
    printf("%i;",getLC(liste, i));
    }
    printf("%i",getLC(liste, len-1));
    printf("]\n");
}

int main(){
    ListeC liste1=createLC();
    addLC(liste1, 32);
    addLC(liste1, 24);
    addLC(liste1, 5);
    addLC(liste1, 7); //identique à test02
    printf("initial:");
    affiche(liste1); //montrer la liste de base

    replaceLC(liste1, -15, 1);
    printf("remplacement:");
    affiche(liste1); //remplacement

    insertLC(liste1, 0, 2);
    insertLC(liste1, 64, 1);
    printf("insertion:");
    affiche(liste1); //insertion

    removeLC(liste1, 3);
    printf("suppression:");
    affiche(liste1);//suppression





    return 0;
}