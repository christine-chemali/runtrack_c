/*
Vous devez implémenter la fonction sort (dans un fichier sort.c) qui prend en
paramètre un tableau de chaînes de caractères (se terminant par un
pointeur NULL) et qui devra les trier dans l’ordre ASCII croissant. Un tri à bulles
est suffisant.

Fonctions autorisées : aucune.

Algo
TRI A BULLES
Entrée : Un tableau T contenant N éléments
Sortie : Le tableau T trié en ordre croissant
Pour tour allant de 1 à N faire
    tableau déja trié - VRAI
    Pour position allant de 0 à (N-tour) Faire
        Si T[position] > T[position+1] Alors
            Echanger T[position] et T[position+1]
            tableau_deja_trié - Faux
        Fin Si
    Fin pour
    Si tableau_déja_trié = Vrai Alors
        Arrêter (le tableau est déja trié)
    Fin Si
Fin Pour*/