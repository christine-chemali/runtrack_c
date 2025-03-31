/*
Job 01
Vous devez implémenter deux fonctions, my_putchar (dans un fichier my_putchar.c) et
my_putstr (dans un fichier my_putstr.c)
La fonction my_putchar prend un caractère en paramètre, et l’écrit sur la sortie
standard. La fonction my_putstr prend une chaîne de caractères en paramètre, et l’écrit
sur la sortie standard, en utilisant la fonction my_putchar.
*/

#include <stdio.h>
#include "my_putchar.h"

void my_putstr(const char *str){
    while (*str)
    {
        my_putchar(*str);
        str++;
    }
    
}
int main(){
    my_putstr("HELLO!");
    return 0;
}

/*In powershell : go to the path (where folder are),
cd "C:\Users\chris\Documents\REPO\runtrack_c\JOUR01\JOB01"
 gcc my_putchar.c my_putstr.c -o my_program (to compile all files together)
 .\my_program.exe
 result : HELLO!
 All this for that!!!WOW */