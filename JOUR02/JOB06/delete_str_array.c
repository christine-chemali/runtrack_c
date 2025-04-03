/*
Vous devez implémenter une fonction delete_str_array (dans un fichier
delete_str_array.c) qui prend en paramètre un pointeur sur tableau de
chaînes de caractères, qui doit libérer toutes les chaînes du tableau, le
tableau lui même, et mettre son pointeur à NULL.

Fonctions autorisées : free.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_str_array(char ***tab){
    if (tab == NULL || *tab == NULL){
        return;
    }
    for (int i = 0; (*tab)[i] != NULL; i++){
        free((*tab)[i]);
    }
    free(*tab);
    *tab = NULL;
}

int main(){
    char **str_array = malloc(sizeof(char*)*4);
    str_array[0] = strdup("Hello");
    str_array[1] = strdup("world");
    str_array[2] = strdup("C");
    str_array[3] = NULL;

    printf("Tableau initial :\n");
    for (int i = 0; str_array[i] != NULL; i++){
        printf("%s\n", str_array[i]);
    }
    delete_str_array(&str_array);

    printf("Tableau après delete_str_array : \n");
    if (str_array == NULL){
        printf("Le tableau a été libéré.\n");
    }else{
        printf("Le tableau n'a pas été libéré.\n");
    }
    return 0;
}