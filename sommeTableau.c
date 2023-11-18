#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int somme(int *tab, int taille);
void remplire (int *tab, int taille);

int main(void)
{
    int tab[3];
    int taille = (sizeof(tab))/sizeof(tab[0]);

    remplire(tab, taille);
    printf("La somme est : %d \n", somme(tab, taille));

    return 0;
}

/*--------------------------------------------------------*/
int somme(int *tab, int taille){
    int somme = 0;
    for (int i = 0; i < taille; i++)
    {
        somme += tab[i];
    }

    return somme;
    
}

/*----------------------------------------------------------*/
void remplire (int *tab, int taille){
    for (int i = 0; i < taille; i++)
    {
        printf("[%d] = ", i);

        if (scanf("%d", &tab[i]) >= taille)
        {
            printf("fixing!!!\n");
            return EXIT_FAILURE;
        }
        
    }
    
}