/*
Vous devez implémenter la fonction my_strcpy (dans un fichier my_strcpy.c), qui prend
en paramètres une chaîne de caractères de destination et une de source, et qui copie la
source dans la destination.

Fonctions autorisées : aucune.*/

#include <stdio.h>

char *my_strcpy(char *dest, const char *src){
    char *original_dest = dest;
    while (*src){
        *dest =*src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

int main(){
    char source[]="Hello, World!";
    char destination[50];
    my_strcpy(destination,source);
    printf("Chaine copiée : %s\n", destination);
    return 0;
}
 /*
 Result : Chaine copiée : Hello, World! */