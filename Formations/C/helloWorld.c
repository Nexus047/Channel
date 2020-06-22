/* _From_Nexus047_
    Fonctions :
        -main()
            arguments : 
                -argc : le nombre d'arguments qui sont présents dans argv (au minimum égal à 1 --> nom du programme)
                -argv[] : un tableau de chaînes de caractères qui peuvent être fournies au main (par défaut seul le nom du programme)
            retour :
                un entier, on a l'habitude de retourner 0 pour spécifier que tout s'est bien passé
        
        -printf()
            arguments :
                -"..." : argument obligatoire qui représente la chaîne de caractères que vous allez afficher
                - divers autres arguments séparés par une virgule pour référer des variables que vous avez définies 
                dans votre code et que vous souhaitez afficher :
                    Ces variables devront être référées dans la chaîne de caractère par des "délimiteurs" propres à chaque types :
                    (en voici quelques un)
                        -int : %d
                        -double : %lf
                        -string (chaîne de caractères) : %s
                        -char : %c
                        ... Voir : https://koor.fr/C/cstdio/fprintf.wp
            retour :
                un nombre entier représentant le nombre de caractères correctement écrits et un nombre négatif en cas d'erreur 
                    (https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)
    Types :
        -float
        -double
        -int
        -long/unsigned/...
        -char
    Pour connaître différents types et leurs valeurs limites : https://www.commentcamarche.net/contents/121-langage-c-les-types-de-donnees
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c = 'A';
    int i = 1;
    char* s = "Bonjour !";
    double d = 0.256;

    printf("%s \nentier : %d | caractere : %c | reel : %lf", s, i, c, d);

    return 0;
}
