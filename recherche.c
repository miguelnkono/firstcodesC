#include <stdio.h>
#include <stdlib.h>

_Bool recherche(int *tab, int taille, int item);

int main(void)
{
    int tab[4] = {4, 2, 3, 1};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Trouver -> 0 et pas trouver -> 1 || verdite : %d\n", recherche(tab, taille, 10));

    return 0;
}

/*--------------------------------------------------*/
_Bool recherche(int *tab, int taille, int item){
    _Bool drapeau = 1;
    int time = 0;

    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == item)
        {
            drapeau = 0;
            ++time;
        }
        
    }
    return drapeau;
    
}