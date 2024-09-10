#include <stdio.h>
#include <stdlib.h>

int main()
{
    // première partie du code gracieusement offerte
    int i;
    i = 99;  // il aurait été plus élégant d'initialiser dès la déclaration, mais il faut respecter l'énoncé
    printf("i = %d\n", i);
    i += 2;
    printf("i = %d\n", i);

    // todo : manipulation du contenu de i via un pointeur
   // int ptr;
    //printf("adresse de ptr : %p\n", (void *) &ptr);
    //int *ptr;
    //ptr = malloc(10*sizeof(int));
    //ptr[7] = 5;
    //printf("A l'adresse %p le tableau commence ", (void *) ptr);
    //printf("Dans la 8eme case il y a la valeur %d \n", ptr[7]);
    //free(ptr);
    int *pi;
   	pi = &i;
   	//int *pi = &i
   	printf("La valeur de pointeur pi %p et la zone pointee de pi : %d \n", (void *) pi, *pi );
   	*pi += 2;
   	printf("La valeur de pointeur pi %p et la zone pointee de pi : %d \n", (void *) pi, *pi );
   	printf("Le contenu de la variable i : %d\n", i);
   	
	printf("La valeur de pointeur pi %p et de pointeur augmentée de 1 de pi : %p \n", (void *) pi, (void *) (pi + 1) );
	
   	
    
    // todo : arithmétique de pointeurs
    
    return EXIT_SUCCESS;
}
