/*
Vous devez implémenter la fonction trim (dans le fichier trim.c) qui prend en paramètre
une chaîne de caractères, alloue la mémoire nécessaire pour une copie de la chaîne
entrante, en retirant les espaces en début et fin de chaîne, puis copie la source dans la
nouvelle chaîne.

Fonctions autorisées : malloc.
Par exemple, la chaîne “ hello world “ deviendra “hello world”.
Les espaces comprennent aussi les tabulations et les retours à la
ligne.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *trim(const char *str){
    if (str == NULL){
        return NULL;
    }
    const char *start = str;
    while (*start == ' ' || *start == 't' || *start =='\n'){
        start++;
    }
    const char *end = str + strlen(str) - 1;
    while (end > start && (*end == ' ' || *end == 't' || *end == '\n')){
        end --;
    }
    size_t length = end - start + 1;
    char *result = (char*)malloc((length+1) * sizeof(char));
    if (result == NULL){
        return NULL;
    }
    strncpy(result, start, length);
    result[length] = '\0';
    return result;
}

int main(){
    const char *original = "   Hello, World!    \n";
    char *trimmed = trim(original);
    if (trimmed != NULL){
        printf("Chaine originale: '%s'\n", original);
        printf("Chaine trimée : '%s'\n", trimmed);
        free(trimmed);
    } else{
        printf("Echec de l'allocation de la mémoire.\n");
    }
    return 0;
}
/*
Résultat : Chaine originale: '   Hello, World!    '
Chaine trimée : 'Hello, World!'*/
