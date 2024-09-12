#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "motif.h"

/*
 * création dynamique du tableau à deux dimensions
 * utilisation de la fonction isOn pour l'initialiser
 */
// todo : écrire la fonction creer
bool ** creer(int x, int y)
{
    bool **tabBool;
    tabBool = malloc(x * sizeof(bool *));
    for(int i = 0; i < x; i++)
    {
        tabBool[i] = malloc(y * sizeof(bool));
        for(int j = 0; j < y; j++)
        {
            tabBool[i][j] = isOn(i,j);
        }
    }
    return tabBool;
}
void afficher(bool **tab, int x, int y)
{
     printf("^\n");    
    for (int j = y - 1; j >= 0; j--) 
    {
        
        printf("|");
        for(int i = 0; i < x ; i++)
        {   
            if(tab[i][j] == true)
                printf("*");
            else
                printf(".");
            
        }
        printf("\n");
        
    }
    printf("+");
    for(int z = 0; z < x; z++)
        printf("-");

    printf(")\n");
        
        
}

/*
 * affichage du tableau
 * - on affiche les axes
 * - attention à l'ordre de parcours des dimensions
 * - attention : affichage de haut en bas, mais les y vont de bas en haut
 */
// todo : écrire la fonction afficher

/*
 * libération des ressources
 */
// todo : écrire la fonction liberer
void liberer(bool **tab, int x)
{
    for (int i = 0; i < x; i ++)
        free(tab[i]);
    
    free(tab);
}


int main()
{
    // appel fonction créer pour un tableau de taille NX x NY (cf. motif.h)
    // appel fonction afficher
    // appel fonction liberer
    bool **tab = creer(70, 20);
    afficher(tab, 70, 20);
    liberer(tab, 70);

    
    return EXIT_SUCCESS;
}
