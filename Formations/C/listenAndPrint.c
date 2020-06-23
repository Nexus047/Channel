#include <stdio.h>

/*
    La fonction scanf() permet de récupérer des données entrées au clavier.
    Son entier de retour contrôle le nombre d'assignations correctement effectuées (0 si il n'y a aucune valeur qui est correctement assignée)

    Se renseigner : 
    -https://askcodez.com/comment-peut-on-tester-les-valeurs-de-retour-du-scanf-la-fonction.html
    -https://documentation.help/C-Cpp-Reference/scanf.html
*/
int main(int argc, char const *argv[])
{
    char c;
    int ac;
    
    printf("\n==================================\nEntrez une lettre ou un code ascii\n==================================\n");
    if(scanf("%d", &ac) == 1) 
        printf("Le caractere du nombre %d est : %c\n", ac, (char)ac);
    else if(scanf("%c", &c))//la conversion est réussie /!\ ce format n'est pas très restrictif car toutes entrées utilisateur est un caractère
                            // donc si vous entrez un nombre par exemple 74, il ne lira que le 7 qui est un caractère en plus d'être un nombre
                            //C'est pourquoi je teste d'abord si il a entré un nombre puis seulement si ce n'est pas un nombre je l'interprète comme un char
        printf("Le code ascii du caractere %c est : %d\n", c, (int)c);
    return 0;
}

/*
    A noter que l'on aurait pu vérifier que les entiers entrés ne dépassaient pas les limites des charactères (en utilisant limit.h par exemple et 
    en conditionnant dans le premier if la variable reçue)
*/
