#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tant qu'on peut lire un caractère sur l'entrée standard on
    // l'écrit sur la sortie standard
    FILE *stream = fopen("fichier.txt", "r");
    if(stream == NULL)
    {
   			fprintf(stderr, "Impossible d'ouvrir ce fichier en lecture\n");
   			exit(EXIT_FAILURE);
   	}
   	else
   	{
   		int c;
   		while ((c = fgetc(stream)) != EOF)
        fputc(c, stdout);
        
   	}	
   	fclose(stream);
    return EXIT_SUCCESS;
}
