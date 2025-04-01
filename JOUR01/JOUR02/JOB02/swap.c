/*
Vous devez implémenter la fonction swap (dans un fichier swap.c) qui prend
en paramètres deux pointeurs sur int, et qui doit échanger leurs valeurs.

Fonctions autorisées : aucune.
*/

#include <stdio.h>

void swap(int *a, int *b){
    if (a != NULL && b != NULL){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int x = 5;
    int y = 10;
    printf("Avant échange : x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Après échange : x = %d, y = %d\n", x, y);
    return 0;
}

/*
Resultat :
Avant échange : x = 5, y = 10
Après échange : x = 10, y = 5

[Done] exited with code=0 in 7.73 seconds*/