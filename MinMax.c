#include <stdio.h>
#include <stddef.h>

int Minimum(int *tab, int taille);
int Maximum(int *tab, int taille);

int main(void)
{
    int tab[4] = {4, 2, 3, 1};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Minimum -> %d\n", Minimum(tab, taille));
    printf("Maximum -> %d\n", Maximum(tab, taille));


    return 0;
}
/*---------------------------------------------------*/
int Minimum(int *tab, int taille){
    int min;
    min = *tab;
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
        
    }
    return min;
    
}

/*---------------------------------------------------*/
int Maximum(int *tab, int taille){
    int max;
    max = *tab;
    for (int j = 1; j < taille; j++)
    {
        if (max < tab[j])
        {
            max = tab[j];
        }
        
    }
    return max;
    
}
