/*
Vous devez implémenter la fonction split (dans le fichier split.c) qui prend en paramètre
une chaîne de caractères, et renvoie un tableau de chaînes de caractères, résultat de la
séparation de la chaîne entrante séparée par mots, et se termine par un pointeur NULL.

Fonctions autorisées : malloc.

Par exemple, la chaîne “ hello world have fun” renvoie un tableau contenant “hello”,
“world”, “have”, “fun”, et NULL.
Les espaces comprennent aussi les tabulations et les retours à la ligne.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static int count_words(const char *str){
    int count = 0;
    int in_word = 0;
    while (*str){
        if (isspace(*str)){
            in_word = 0;
        } else {
            if (in_word == 0){
                count++;
                in_word = 1;
            }
        }
        str++;
    }
    return count;
}

char **split(const char *str){
    if (str == NULL){
        return NULL;
    }
    int word_count = count_words(str);
    char **result = (char**)malloc((word_count + 1)* sizeof(char*));
    if (result == NULL){
        return NULL;
    }
    int index = 0;
    const char *start = NULL;
    while (*str){
        if (!isspace(*str) && start == NULL){
            start = str;
        }
        else if (isspace(*str) && start != NULL){
            size_t lenght = str - start;
            result[index] = (char*)malloc((lenght + 1) * sizeof(char));
            if (result[index] == NULL) {
                for (int j = 0; j < index; j++){
                    free(result[j]);
                }
                free(result);
                return NULL;
            }
            strncpy(result[index], start, lenght);
            result[index][lenght] = '\0';
            index++;
            start = NULL;
        }
        str++;
    }
    if (start != NULL){
        size_t lenght = str - start;
        result[index] = (char*)malloc((lenght + 1)* sizeof(char));
        if (result[index] == NULL){
            for (int j = 0; j < index; j++){
                free(result[j]);
            }
            free(result);
            return NULL;
        }
        strncpy(result[index], start, lenght);
        result[index][lenght] = '\0';
        index++;
    }
    result[index] = NULL;
    return result;
}

int main (){
    const char *original = "           hello world   have fun    \n";
    char **words = split(original);
    if (words != NULL){
        for (int i=0; words[i] != NULL; i++){
            printf("Mot %d : '%s'\n", i+1, words[i]);
            free(words[i]);
        }
        free(words);
    }else{
        printf("Echec de l'allocation de mémoire.\n");
    }
    return 0;
}

/*
Result : 
Mot 1 : 'hello'
Mot 2 : 'world'
Mot 3 : 'have'
Mot 4 : 'fun'

[Done] exited with code=0 in 26.395 seconds*/