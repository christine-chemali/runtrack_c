/*
Vous devez implémenter la fonction char_is_digit (dans un fichier char_is_digit.c) qui
prend en paramètre un caractère, et qui renvoie 1 si le caractère est un chiffre, 0 si ça
n’en est pas un.
Vous devez aussi implémenter une fonction str_is_digit (dans un fichier str_is_digit.c)
qui prend en paramètre une chaîne de caractères, et qui renvoie 1 si la chaîne ne
contient que des chiffres, 0 si ce n’est pas le cas.

Fonctions autorisées : aucune.*/

#include <stdio.h>

int char_is_digit(char c){
    if (c >='0' && c <= '9'){
        return 1;
    }
    return 0;
}
int main(){
    char test1='5';
    char test2='a';
    char test3='?';
    char test4='9';

    printf("char_is_digit('%c') = %d\n", test1, char_is_digit(test1));
    printf("char_is_digit('%c') = %d\n", test2, char_is_digit(test2));
    printf("char_is_digit('%c') = %d\n", test3, char_is_digit(test3));
    printf("char_is_digit('%c') = %d\n", test4, char_is_digit(test4));
    return 0;
}