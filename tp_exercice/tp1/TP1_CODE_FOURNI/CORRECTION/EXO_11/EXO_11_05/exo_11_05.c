#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "motif.h"

/*
 * création dynamique du tableau à deux dimensions
 * utilisation de la fonction isOn pour l'initialiser
 */
// todo : écrire la fonction creer
bool ** creer(int nx, int ny)
{
    bool **tab;
    
    tab = malloc(nx * sizeof(bool *));
    for (int x = 0; x < nx; x++)
    {
        tab[x] = malloc(ny * sizeof(bool));
        for (int y = 0; y < ny; y++)
            tab[x][y] = isOn(x, y);
    }

    return tab;
}

/*
 * affichage du tableau
 * - on affiche les axes
 * - attention à l'ordre de parcours des dimensions
 * - attention : affichage de haut en bas, mais les y vont de bas en haut
 */
// todo : écrire la fonction afficher
void afficher(bool **tab, int nx, int ny)
{
    printf("^\n");
    for (int y = ny-1; y >= 0; y--)
    {
        printf("|");
        for (int x = 0; x < nx; x++)
        {
            if (tab[x][y])
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    printf("+");
    for (int x = 0; x < nx; x++)
        printf("-");
    printf(")\n");
}

/*
 * libération des ressources
 */
// todo : écrire la fonction liberer
void liberer(bool **tab, int nx/*, int ny*/)
{
     for (int x = 0; x < nx; x++)
         free(tab[x]);
     free(tab);
}

int main()
{
    bool ** tab = creer(NX, NY);
    afficher(tab, NX, NY);
    liberer(tab, NX/*, NY*/);
    
    return EXIT_SUCCESS;
}
