
#include <stdio.h>
#include <stdlib.h>

struct temps{
        unsigned heures;
        unsigned minutes;
        double secondes;
    };

int main()
{
    struct temps t1;
    struct temps t2;

    printf("Premiere mesure (hh:mm:ss.xxx) : ");
    if(scanf("%u:%u:%lf", &t1.heures, &t1.minutes, &t1.secondes) != 3){
        printf("Entrer invalide!\n");
        return EXIT_FAILURE;
    }

    printf("Deuxieme mesure (hh:mm:ss.xxx) : ");
    if(scanf("%u:%u:%lf", &t2.heures, &t2.minutes, &t2.secondes) != 3){
        printf("Entrer invalide!\n");
        return EXIT_FAILURE;
    }

    t1.minutes += t1.heures*60;
    t1.secondes += t1.minutes*60;
    t2.minutes += t2.heures*60;
    t2.secondes += t2.minutes*60;

    printf("Il y a %.3f seconde(s) de difference.\n", t2.secondes - t1.secondes);

    return 0;
}
