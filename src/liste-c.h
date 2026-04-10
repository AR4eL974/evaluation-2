#pragma once
#include <stdlib.h>

char* versionLC();

struct st_listeC;
typedef struct st_listeC * ListeC;

ListeC createLC();			                        //crée une liste		
int sizeLC(ListeC liste);                           // renvoie sous forme d'un entier la longueur actuelle de la liste
void addLC(ListeC liste, int value);                // rajoute un élément dans la liste
int getLC(ListeC liste, int pos);	                // renvoie sous forme d'un entier un élément de la liste

void replaceLC(ListeC liste, int value, int pos);   // remplace un élément de la liste par une valeur
void insertLC(ListeC liste, int value, int pos);	// insère un élément dans la liste
void removeLC(ListeC liste, int pos);               // retire un élément de la liste
void deleteLC(ListeC liste);                        // supprime la liste