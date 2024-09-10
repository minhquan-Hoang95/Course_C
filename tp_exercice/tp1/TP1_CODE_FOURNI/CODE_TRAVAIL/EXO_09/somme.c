#include <stdio.h>
#include <stdlib.h>

// todo : fonction somme de deux float
float somme_float(float f1, float f2)
{
	return f1 + f2;
}

int main()
{
    // todo : appel de somme avec 1.12032003 et 2.02127003
    float f1 = 1.12032003;
    float f2 = 2.02127003;
    float f3 = somme_float(f1,f2);
    printf("Le résultat : %f\n", f3);
    

    return EXIT_SUCCESS;
}
