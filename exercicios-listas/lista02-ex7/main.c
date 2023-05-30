/******************************************************************************


Isaac Vono Rodrigues - 2AN - AED II - Lista 02 - Ex 07 - 01/03/2023

Descrição -> Código que recebe 10 valores e calcula e mostra a soma dos positivos e quantidade de negativos.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i, j;
    float array[10], soma;
    for (i=0;i<10;i++) {
        scanf("%f",&array[i]);
        if (array[i] > 0) {
            soma += array[i];
        }
        else {
            j++;
        }
    }
    printf("O número de valores negativos digitados é: %d \n", j);
    printf("A soma dos valores positivos é: %f", soma);
}
