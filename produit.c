#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double produit2D (int (*tab)[3]);

int main(void)
{
    int tab[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };

    printf("Product -> %.0f\n", produit2D(tab));

    return EXIT_SUCCESS;
}

double produit2D (int (*tab)[3]){
    double som[3] = {0, 0, 0};
    double product = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            som[i] += tab[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        product *= som[i];
    }
    
    return product;
}