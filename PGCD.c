#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char **argv)
{
    long int a, b;
    int _rest = 0;
    long int _temp_a = 0, _temp_b = 0;

    printf("Enter deux nombres : ");
    scanf("%ld/%ld", &a, &b);

    _temp_a = a;
    _temp_b = b;

    if( a < b){
        long int _temp = a;
        a = b;
        b = _temp;
    }
    _rest = (a % b);

    while (_rest != 0){
        a = b;
        b = _rest;
        _rest = a % b;
    }

    printf("Le PGCD de %ld et de %ld est : %d", _temp_a, _temp_b, b);

    return 0;
}
