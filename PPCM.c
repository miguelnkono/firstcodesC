#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0, b = 0;
    printf("Entrez deux nombres(a/b) : ");
    scanf("%d/%d", &a, &b);

    int min = (a < b)? a : b;

    int i;
    for(i = 2; i <= min; ++i){
        if(a % i == 0 && b % i == 0){
            goto trouve;
        }
    }

    return 0;
trouve :
    printf("Le plus petit commun diviseur de %d et de %d est %d", a, b, i);
    return 0;
}
