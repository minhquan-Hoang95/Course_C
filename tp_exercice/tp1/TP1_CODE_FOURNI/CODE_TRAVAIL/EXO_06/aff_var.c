#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[], char * env[]/* déclaration des 3 paramètres */)
{
    // todo : afficher les paramètres passés en ligne de commande
    // argc contient le nombre de paramètres
    // argv est un tableau de chaine de caractères
    // argc vaut 2 donc il y a seulement un paramètres passé lors de la ligne de commandes
    // argv[0] = le nom de l'exécutable
    // argv[1] = le paramètre  sous forme d'une chaine donc 
    // env est un tableau de chianes, avec une chaine par variable d'environnement récupérée
	
	printf(" J'ai %d\n",argc - 1 );
	for (int i = 1 ; i < argc ; i++)
	{
	printf( "J'ai %s", argv[i]); 
	printf("\n");

	}
	
    // todo : afficher les variables du shell
    
    int j = 0;
    while(env[j] != NULL)
    {
    	printf("J'ai %s\n", env[j]);
    	j++;
    }
    
    
    return EXIT_SUCCESS;
}
