/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 02 - Ex 05 - 01/03/2023

Descrição -> Código que lê 6 valores, e imprime os 6 em ordem inversa.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int array[6], i;
    printf("Escreva 6 valores:\n");
    for (i=0;i<6; i++) {
        scanf("%d",&array[i]);
    }
    for (i=5;i>=0;i--) {
        printf("%d\n", array[i]);
    }
}

