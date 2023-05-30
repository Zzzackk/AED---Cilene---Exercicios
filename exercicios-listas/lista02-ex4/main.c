/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 02 - Ex 04 - 01/03/2023

Descrição -> Código que recebe 10 valores e imprime o maior elemento e sua posição.

*******************************************************************************/
#include <stdio.h>
#define TAM 10
void main()
{
    int array[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &array[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {
        if (array[i] > maior) {
            maior = array[i];
            posicao = i;
        }
    }
    printf("\nO maior elemento é:%d. E esta na posição %d.", maior, posicao);
}

