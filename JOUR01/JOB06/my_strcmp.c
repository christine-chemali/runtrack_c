/*
Vous devez implémenter la fonction my_strcmp (dans un fichier my_strcmp.c) qui
prend en paramètre deux chaînes de caractères, les compare, et renvoie 0 si elles sont
identiques, et une valeur négative si la première chaîne est inférieure à la deuxième, ou
positive si elle est supérieure à la deuxième.
Fonctions autorisées : aucune.
Note : Une chaîne est inférieure à une autre si le premier caractère différent dans les
deux chaînes est inférieur (dans l’ordre de la table ASCII) dans la première chaîne par
rapport à celui de la deuxième chaîne.

Par exemple, la chaîne “abc” est inférieure à la chaîne “abd” parce que les deux premiers
caractères sont identiques, mais “c” est inférieur à “d” dans la table ASCII.*/

#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (unsigned char)(*str1) - (unsigned char)(*str2);
}

int main() {
    const char *string1 = "abc";
    const char *string2 = "abd";
    const char *string3 = "abc";
    const char *string4 = "ab";

    printf("my_strcmp(\"%s\", \"%s\") = %d\n", string1, string2, my_strcmp(string1, string2)); 
    printf("my_strcmp(\"%s\", \"%s\") = %d\n", string1, string3, my_strcmp(string1, string3)); 
    printf("my_strcmp(\"%s\", \"%s\") = %d\n", string1, string4, my_strcmp(string1, string4)); 

    return 0;
}
/* result
my_strcmp("abc", "abd") = -1
my_strcmp("abc", "abc") = 0
my_strcmp("abc", "ab") = 99 */