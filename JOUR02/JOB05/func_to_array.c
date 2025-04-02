/*Vous devez implémenter une fonction func_to_array (dans un fichier
func_to_array.c), qui prend en paramètres un tableau de chaînes de
caractères, ainsi qu’un pointeur sur fonction, et applique cette fonction sur
toutes les chaînes.
Les fonctions qui peuvent être appliquées sont variées : une fonction
strtoupper, strtolower, ou même my_putstr.
Fonctions autorisées : aucune.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


void func_to_array(char **tab, void (*func)(char*)){
    for (int i = 0; tab[i] != NULL; i++){
        func(tab[i]);
    } //*1
}

void my_putstr(char *str){
    printf("%s\n", str);
}

void strtolower(char *str){
    for (int i=0; str[i] !='\0'; i++){
        str[i] = tolower((unsigned char)str[i]);
    } //*2
}

void strtoupper(char *str){
    for (int i=0; str[i] !='\0';i++){
        str[i] = toupper((unsigned char)str[i]);
    }
}

int main(){
    char *original_tab[] = {"Salut", "il", "fait", "très beau", NULL};
    char *tab_upper[5];
    for (int i=0; original_tab[i]!=NULL; i++){
        tab_upper[i]= malloc(strlen(original_tab[i]+1));
        strcpy(tab_upper[i], original_tab[i]);
    }
    tab_upper[4] = NULL;
    char *tab_lower[5];
    for (int i=0; original_tab[i]!=NULL; i++){
        tab_lower[i]= malloc(strlen(original_tab[i]+1));
        strcpy(tab_lower[i], original_tab[i]);
    }
    tab_lower[4] = NULL;

    printf("Majuscules :\n");
    func_to_array(tab_upper, strtoupper);
    func_to_array(tab_upper, my_putstr);

    printf("Minuscules :\n");
    func_to_array(tab_lower, strtolower);
    func_to_array(tab_lower, my_putstr);

    for (int i=0; tab_upper[i]!=NULL; i++){
        free(tab_upper[i]);
    }
    for (int i=0; tab_lower[i]!=NULL; i++){
        free(tab_lower[i]);
    }
    return 0;
}

/*1 for (int i=0; tab[i] !=NULL; i++):
    boucle utilisée pour parcourir un tableau de pointeurs de caractères char **tab
    la condition tab[i] !=NULL vérifie si l'élément actuel dans le tableau n'est pas un pointeur NULL:
    le dernier élément d'un tableau est marqué NULL pour indiquer sa fin.
    la boucle continuera jusqu'à ce qu'elle atteigne un pointeur NULL (plus de chaine à traiter).
*/ 
/*2 for (int i=0; str[i] != '\0'; i++):
    boucle utilisée pour parcourir une seule chaîne de caractères(un tableau de caractères char *str)
    la condition str[i] != '\0' vérifie si le caractère actuel n'est pas le terminateur nul '\0' qui marque la fin de la chaîne en C
*/
