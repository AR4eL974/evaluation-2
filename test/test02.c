#include "../lib/liste-c.h"
#include <stdio.h>

void affiche(ListeC liste){
    printf("Liste: [");
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
    addLC(liste1, 7);

    affiche(liste1);
    return 0;

}

