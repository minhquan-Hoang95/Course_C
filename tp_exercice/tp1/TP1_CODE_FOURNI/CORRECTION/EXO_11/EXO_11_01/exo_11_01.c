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

    // première partie du code gracieusement offerte
    int *pi;
    pi = &i;  // il aurait été plus élégant d'initialiser dès la déclaration, mais il faut respecter l'énoncé
    printf("pi = %p, *pi = %d\n", (void *)pi, *pi);
    *pi += 2;
    printf("pi = %p, *pi = %d\n", (void *)pi, *pi);
    printf("i = %d\n", i);

    // todo : arithmétique de pointeurs
    printf("pi = %p, pi+1 = %p\n", (void *)pi, (void *)(pi+1));
    // pi+1 fait un décalage de 4 (ou plus exactement de sizeof(int)) en
    // mémoire ; cela permet de pointer directement sur l'entier suivant (si
    // c'était un tableau).

    return EXIT_SUCCESS;
}
