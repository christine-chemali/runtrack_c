/*Vous devez implémenter la fonction my_strlen (dans un fichier my_strlen.c), qui prend
en paramètre une chaîne de caractères, et qui renvoie sa taille.

fonctions autorisées : aucune.*/

#include <stdio.h>

int my_strlen(const char *str){
    int lenght=0;
    while (str[lenght]!='\0'){
        lenght++;
    }
    return lenght;
}

int main(){
    const char *str = "Hello, Folks!";
    int lenght = my_strlen(str);
    printf("La longueur de la chaine est : %d\n", lenght);
    return 0;
}
/* result in console : La longueur de la chaine est : 13 */