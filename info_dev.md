## Introduction:
Au jour du 10/04/2026, je commence à entreprendre de réimplémenter la librairie **liste-c**, et ce car la version actuelle qui nous est fournie en non-open source comporte des fuites de mémoire ce qui pose un problème aux 4 utilisateurs de cette librairie dans le monde.

Le développement de cette version open-source se déroulera sur [un dépôt hébergé sur Github](https://github.com/AR4eL974/evaluation-2)

## La directive #pragma once

la directive #pragma once au début d'un fichier de librairie .h sert à remplacer la syntaxe suivante:
```
#ifndef _MYHEADER_H_
#define _MYHEADER_H_
...
#endif
```
En plus d'être plus court et simple à écrire, cela permet aux compilateurs qui le supportent d'utiliser leur cache interne qui est plus rapide. Pratiquement tous les compilateurs supportent cette directive.