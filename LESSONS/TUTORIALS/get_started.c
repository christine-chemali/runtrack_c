
//FIRST PROGRAM - Syntax - Statements


#include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
}

/*Resultat attendu:
Hello World!

POINT PAR POINT :
#include <stdio.h> : cela est pour inclure la librairie 
        standard input output, c'est une header file.
        Elle ajoute des fonctionnalités au programme
int : pour signifier que le programme doit à la 
        fin de son exécution renvoyer un nombre entier
main() : fonction principale qui va être utilisée 
        pour executer le programme 
{ } : tout ce qui est entre parenthèses sera excécuté
printf() : pour afficher en console ce qui 
        sera écrit dans les parenthèses
" " : tout ce qui sera imprimé en console 
        doit être mis entre guillemets
; : point virgule marque la fin d'une déclaration (statement)
return 0; : c'est ce qui signifie la fin de la fonction main, 
            un entier est retourné ici on attend un 0 
            qui signifiera que le programme s'est éxécuté correctement, 
            l'issue est positive.

A SAVOIR :
C ignore les espaces. Sauter une ligne n'a pas d'incidence sur l'execution du code
on pourrait écrire int main(){printf("Hello World!");return 0;}
mais c'est pas très lisible.

Un programme est une liste d'instructions qui seront éxécutées par l'ordinateur.
Ces instructions sont appellées statements (déclarations).
Les statements doivent se terminer par un point virgule.

*/