/*Vous devez implémenter la fonction divide (dans un fichier divide.c) qui va
prendre en paramètre un pointeur sur int, et qui devra diviser la valeur de l’int
par 2.
Fonctions autorisées : aucune.
*/

#include <stdio.h>

void divide(int *value){
    if (value != NULL) {
        *value /= 2;
    }
}

int main (){
    int x = 10;
    printf("Avant division : %d\n", x);
    divide(&x);
    printf("Après division : %d\n", x);
    return 0;
}

/* Résultat :
Avant division : 10
Après division : 5

[Done] exited with code=0 in 7.589 seconds*/