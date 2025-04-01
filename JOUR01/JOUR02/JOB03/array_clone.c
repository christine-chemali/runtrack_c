/*
Vous devez implémenter la fonction array_clone (dans un fichier
array_clone.c) qui doit prendre en paramètre un tableau de chaînes de
caractères, et un int n. Elle devra renvoyer un tableau de chaîne de
caractères qui contient des copies des chaînes de caractères du tableau
entrant, jusqu’à la nième, ou jusqu’au premier pointeur NULL présent. Le
tableau sortant devra se terminer par un pointeur NULL.

Fonctions autorisées : malloc.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **array_clone(char **array, int n){
    if (array == NULL){
        return NULL;
    }
    char **clone = malloc((n+1)* sizeof(char*));
    if (clone == NULL){
        return NULL;
    }
    for (int i = 0; i < n && array[i] != NULL; i++){
        clone[i] = strdup(array[i]);
        if (clone[i] == NULL){
            for (int j = 0; j < i ; j++){
                free(clone[j]);
            }
            free(clone);
            return NULL;
        }
    }
    clone[n] = NULL;
    return clone;
}

int main(){
    char *array[] = {"Hello", "World", "This", "Is", "Not", "Cool", NULL};
    int n = 3;
    char **cloned_array = array_clone(array, n);
    if (cloned_array != NULL){
        for (int i = 0; cloned_array[i] != NULL; i++){
            printf("%s\n", cloned_array[i]);
            free(cloned_array[i]);
        }
        free(cloned_array);
    }
    return 0;
}

/* results
Hello
World
This

[Done] exited with code=0 in 20.566 seconds*/