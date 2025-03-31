/*
Vous devez implémenter la fonction my_strdup (dans un fichier my_strdup.c) qui prend
en paramètre une chaîne de caractères, alloue la mémoire nécessaire pour une copie de
la chaîne entrante, copie celle-ci dans l’espace mémoire fraîchement alloué.*/

#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *s) {
    if (s == NULL) {
        return NULL; 
    }
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    char *copy = (char *)malloc((length + 1) * sizeof(char));
    if (copy == NULL) {
        return NULL;
    }
    for (int i = 0; i < length; i++) {
        copy[i] = s[i];
    }
    copy[length] = '\0';
    return copy;
}


int main() {
    const char *original = "Hello, World!";
    char *duplicate = my_strdup(original);
    if (duplicate != NULL) {
        printf("Chaîne dupliquée : %s\n", duplicate);
        free(duplicate);
    } else {
        printf("Échec de la duplication de la chaîne.\n");
    }
    return 0;
}

/*Résultat:Chaîne dupliquée : Hello, World! */