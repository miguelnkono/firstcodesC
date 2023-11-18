
#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char **argv)
{
    int _nombre = 0, i, _exposant = 0;

    printf("Veuillez entré un nombre : ");
    scanf("%d", &_nombre);

    for (i = _nombre; (i % 3 == 0) && (i > 0); i /= 3)
        ++_exposant;

    if(i == 1)
        printf("%d est egale à 3 ^ %d", _nombre, _exposant);
    else
        printf("%d n'est pas une puissance de 3!", _nombre);

    return 0;
}
