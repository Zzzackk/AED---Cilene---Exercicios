/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 02 - Ex 03 - 01/03/2023

Descrição -> Código que lê um vetor de 10 posições, e conta e escreve quantos valores pares ele possui.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int array[10], i, j;
    printf("Escreva 10 valores:\n");
    for (i=0;i<10; i++) {
        scanf("%d",&array[i]);
    }
    
    for (i=0;i<10;i++) {
        if (array[i] % 2 == 0) {
            j++;
        }
    }
    printf("O número de valores pares digitados é: %d", j);
}

