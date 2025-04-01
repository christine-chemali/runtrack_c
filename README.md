# runtrack_c
Discovering C 
# C NOTIONS :

## DAY01:

#include <stdio.h> : inclus la bibliothèque standard input / output de C (std pour standard et io pour input/output) contient des déclarations comme putchar, printf....

void : utilisé pour une fonction qui ne retourne aucune valeur lors de son achevement = VIDE sans VALEUR, elle indique le type de retour comme int qui est attendu. 
    Pointeur void* peut pointer vers n'importe quelle type de données. Il peut être converti en n'importe quel autre type de pointeur. 
    
    void *ptr;
    int a = 5;
    ptr = &a;

* : 
    Pointeur : lorsque * est utilisé dans une déclaration de variable, il indique que la variable est un pointeur.
    Un pointeur est une variable qui stocke l'adresse d'une autre variable ex:
    int *ptr; // ptr est un pointeur vers un entier. 
    Dans ce cas, ptr peut contenir l'addresse de la variable de type int. Pour assigner une adresse à un pointeur on utilise l'opérateur &.
    
    int a = 10;
    ptr = &a; // ptr pointe vers la variable a

    Déréferencement :
    Lorsqu'un astérisque est utilisé devant un pointeur, il permet de déférencer ce pointerur, c'est à dire accéder à la valeur stockée à l'addresse pointée par le pointeur.
    
    int value = *ptr; // value obtient la valeur de la variable pointée par ptr

    Déclaration de fonctions retournant des pointeurs, lors de la déclaration d'une fonction qui retourne un pointeur, l'astérisque est également utilisée:

    int* my_function(){
        int *ptr = malloc(sizeof(int)); // allocation dynamique d'un entier
        *ptr = 20; // assigner une valeur
        return ptr; // retourne un pointeur vers l'entier
    }

    Pointeurs dans des paramètres de fonction
    Lorsque l'on passe un pointeur en tant que paramètre à une fonction, on peut utiliser l'astérisque pour permettre à la fonction de modifier la valeur à laquelle le pointeur fait référence.

    void modify_value(int *p){
        *p = 30; // Modifie la valeur pointée par p 
     } 
    int main(){
        int a = 10;
        modify_value(&a); // Passe l'adresse de a // a est maintenant 30
    }               

    L'utilisation de * est essentielle pour la gestion de la mémoire et les structures de donnée dans c

& : L'esperluette & en C
    Opérateur d'adresse
    L'utilisation la plus courante de & est comme opérateur d'adresse. Lorsqu'il est placé devant une variable. Cela permet d'obtenir un pointeur vers cette variable

    int a = 5;
    int *ptr = &a; // ptr obtient l'adresse de la variable a
    
    Ici &a renvoie l'addresse de la variable a qui est ensuite stockée dans le pointeur ptr.
    
int :

malloc :

sizeof :


putchar :


printf : 