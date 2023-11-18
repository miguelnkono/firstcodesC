#include <stdio.h>
#include <stdlib.h>

void Pascal (int (*tab)[10], int Taille);
void printPacal(int (*tab)[10], int Taille);

int main(void)
{
    int tab[10][10] = { {0} };
    int Taille;

    printf("Taille -> : ");
    if (scanf("%d", &Taille) != 1)
    {
        printf("Mauvaise saisie\n");
        return EXIT_FAILURE;
    }

    Pascal(tab, Taille);
    printPacal(tab, Taille);
    
    return 0;
}

/*-------------------------------------------*/
void Pascal (int (*tab)[10], int Taille){
    if (Taille >= 10)
    {
        printf("La taille passe en argument ne doit etre plus grand ou egal a 10\n");
        return EXIT_FAILURE;
    }
    tab[0][0] = 1;

    for (int i = 1; i < Taille; ++i)
    {
        tab[i][0] = 1;
        for (int j = 1; j < i; ++j)
        {
            tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
        }
        tab[i][i] = 1;
    }
}

/*---------------------------------------------*/
void printPacal(int (*tab)[10], int Taille){
    for (int i = 0; i < Taille; ++i)
    {
        for (int sp = Taille - 1 - i; sp > 0 ; --sp)
        {
            printf(" ");
        }
        for (int j = 0; j < Taille; j++)
        {
            if (tab[i][j] != 0)
                printf("\t%d", tab[i][j]);
        }
        printf("\n");
    }
}