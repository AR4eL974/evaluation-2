## La librairie : ListeC

Une implémentation des listes chainées en C.


## fork avril 2026

Une fuite de mémoire a été détéctée dans [la version originale](https://github.com/payetdenis/liste-c) de la librairie, Ainsi je vais commencer le développement d'une nouvelle version à partir de zéro, comme la version originale n'est pas open source, plus d'informations sont disponibles [**ici**](info_dev.md).


## API de la librairie liste-c 

Ci dessous sont listées les fonctions incluses dans la librairie liste-c, des commentaires plus brefs et les formats d'arguments attendus sont également inclus dans [le fichier .h](src/liste-c.h).

- **CreateLC()** - cette fonction est utilisée pour créer une liste chaînée. Exemple: 
````cpp
    ListeC liste1=createLC();
````

- **sizeLC()** - cette fonction renvoie sous forme d'un entier la longueur d'une liste chaînée. Exemple:
```cpp
    int len=sizeLC(liste);
```

- **addLC()** - cette fonction permet d'insérer un élément type entier à la dernière position dans une liste chaînée. Exemple:
```cpp
    addLC(liste1, 32);
```

- **getLC()** - cette fonction renvoie sous forme d'entier l'élément à la position demandée dans une liste chaînée spécifiée. Exemple: 
```cpp
    getLC(liste1, 3)
```
- **replaceLC()** - cette fonction remplace l'élément à une certaine position par une valeur dans une liste chaînée. Exemple: (cet exemple remplace la valeur dans la case 3 de la liste *liste1* par l'entier 67)
```cpp
replaceLC(liste1, 67, 3)
```
- **insertLC()** - cette fonction a pour but d'insérer un élément à la position demandée puis décaler tous les éléments suivantes d'une case vers la droite. Exemple: (cet exemple insère dans la liste *liste1* l'élément 64 dans la case numéro 1.)
```cpp
insertLC(liste1, 64, 1);
```
- **removeLC()** - cette fonction retire l'élément se trouvant sur la case spécifiée. Exemple: 
```cpp
 removeLC(liste1, 3);
```

- **deleteLC()** - cette fonction est celle qui manquait à [la librairie originale](https://github.com/payetdenis/liste-c), elle permet de supprimer une liste chaînée après s'en être servi, typiquement à la fin d'un programme. Exemple:
```cpp
deleteLC(liste1)
```