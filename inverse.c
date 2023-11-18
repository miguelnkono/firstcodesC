#include <stdio.h>
#include <stdlib.h>

void inverse(int *tab, int taille);

int main(void)
{
    int tab[4] = {1, 2, 3, 4};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Avant :\n");
    for(int g = 0; g < taille; g++){
        printf("\t[%d] -> %d \n",g, tab[g]);
    }

    inverse(tab, taille);

    printf("Apres :\n");
    for (int k = 0; k < taille; k++)
    {
        printf("\t[%d] -> %d\n",k, tab[k]);
    }
    

    return 0;
}

/*-------------------------------------------*/

void inverse(int *tab, int taille){
    int newtab[taille];

    for (int i = 0; i < taille; i++)
    {
        newtab[i] = tab[taille - i - 1];
    }

    for (int j = 0; j < taille; j++)
    {
        tab[j] = newtab[j];
    }
}