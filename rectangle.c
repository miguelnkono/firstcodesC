#include <stdio.h>

void triangle(int _rows);

int main(void)
{
    triangle(5);
    return 0;
}
void triangle(int _rows){
    int _cols = 1;
    for (int i = 0; i < _rows; ++i){
            for(int j = 0; j < _cols; ++j){
                    printf("*");
            }
            printf("\n");
            ++_cols;
    }
    return 0;
}
