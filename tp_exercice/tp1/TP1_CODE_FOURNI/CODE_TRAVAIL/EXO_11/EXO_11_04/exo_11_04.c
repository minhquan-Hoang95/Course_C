#include <stdio.h>
#include <stdlib.h>

#define TAILLE1 10

struct Exo
{
    float f;
    float tab1[TAILLE1];
    int taille2;
    float *tab2;
};

// typedef struct  Exo1
// {
//     /* data */
//     float f;
//     float tab1[TAILLE1];
//     int taille2;
//     float *tab2;
// }Exo1;


// todo : fonction init (la structure est déjà allouée)
void init(struct Exo *exo, float f, int size2)
{
    exo->f = f;
    for(int i = 0; i < TAILLE1; i++)
    {
        exo->tab1[i] = i + 1;
    }
    exo->taille2 = size2;
    exo->tab2 = malloc(size2 * sizeof(float));
    for (int  i = 0; i < size2; i++)
        exo->tab2[i] = i + 2;
    
}

// todo : fonction creer
struct Exo * creer(int sizeTab)
{
    struct Exo *exos;
    exos = malloc(sizeTab*sizeof(struct Exo));
    for(int i = 0; i < sizeTab; i++)
        init(&(exos[i]),i + 3,sizeTab + 3);

    return exos;
}

// todo : fonction liberer
void liberer(struct Exo *exos, int sizeTab)
{
    for(int i = 0; i < sizeTab; i++)
        free(exos[i].tab2);

    free(exos);    
}

void printfExo(struct Exo exo){
    printf("Exo f : %f and taille2 : %d\n", exo.f, exo.taille2);
    for(int i = 0; i < TAILLE1; i++){
        printf("tab1[%d] : %f\n", i, exo.tab1[i]);
    }
    for( int i = 0; i < exo.taille2; i++){
        printf("tab2[%d] : %f\n", i, exo.tab2[i]);
    }
}



int main()
{
    // todo : appeler creer et liberer
    struct Exo *exos = creer(5);
    for(int i = 0; i < 5; i++){
        printfExo(exos[i]);
    }
    liberer(exos, 5);
    exos = NULL;
    
    return EXIT_SUCCESS;
}
