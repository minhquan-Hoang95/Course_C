#include <stdio.h>
#include <stdlib.h>

// rq : il n'est pas nécessaire de passer le 3me argument bien que l'on
//      manipule les variables d'environnement
int main(int argc, char * argv[])
{
    // todo : vérifier qu'un argument est bien présent sur la ligne de commande
    if(argc != 2) 
    {
    printf("usage : %s <nom variable>\n", argv[0]);
    exit(EXIT_FAILURE);
    }

    // todo : récupérer la valeur de la variable d'environnement
    //        afficher la valeur ou un message d'erreur si elle n'existe pas
    const char *name = argv[1];
    char * value = getenv(name);
    if(value == NULL)
    {
		printf("C'est une erreur, vide!\n");
		printf("Le nom est : %s et sa valeur : %s\n", name, value);
	}
    else 
    {
    	printf("C'est validé, voici : \n");
		printf("Le nom est : %s et sa valeur : %s\n", name, value);
    }
    return EXIT_SUCCESS;
}
