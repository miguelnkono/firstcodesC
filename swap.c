#include <stdio.h>
#include <stddef.h>

void swap(int *a, int *b);

int main(void)
{
    int *a = 10;
    int *b = 20;

    swap(&a, &b);

    printf("a -> %d et b -> %d", a, b);

    return 0;
}

void swap(int *a, int *b){
    int p = *a;
    *a = *b;
    *b = p;
}
