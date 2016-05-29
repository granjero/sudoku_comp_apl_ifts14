#include <stdio.h>

void imprimeCuadrante(int *cuadrante)
{
    int i;
    
    for (i=0; i < 9; i++)
    {
        printf("%i ", cuadrante[i]);
        if ((i+1)%3 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}