/*
Vous devez implémenter la fonction char_is_digit (dans un fichier char_is_digit.c) qui
prend en paramètre un caractère, et qui renvoie 1 si le caractère est un chiffre, 0 si ça
n’en est pas un.
Vous devez aussi implémenter une fonction str_is_digit (dans un fichier str_is_digit.c)
qui prend en paramètre une chaîne de caractères, et qui renvoie 1 si la chaîne ne
contient que des chiffres, 0 si ce n’est pas le cas.

Fonctions autorisées : aucune.*/

#include <stdio.h>

int str_is_digit(const char *str){
    if (str == NULL || *str == '\0'){
        return 0;
    }
    while (*str){
        if (*str < '0' || *str > '9'){
            return 0;
        }
        str++;
    }
    return 1;
}

int main(){
    const char *test1 = "12345";
    const char *test2 = "12a51";
    const char *test3 = "";
    const char *test4 = "6785!";
    printf("str_is_digit(\"%s\") = %d\n", test1, str_is_digit(test1));
    printf("str_is_digit(\"%s\") = %d\n", test2, str_is_digit(test2));
    printf("str_is_digit(\"%s\") = %d\n", test3, str_is_digit(test3));
    printf("str_is_digit(\"%s\") = %d\n", test4, str_is_digit(test4));
    return 0;
}

/* RESULTS
str_is_digit("12345") = 1
str_is_digit("12a51") = 0
str_is_digit("") = 0
str_is_digit("6785!") = 0*/