/******************************************************************************

Isaac Vono Rodrigues | 2AN | 30/03/2023

AED2 | Lista de Exercicios | Exercicio 2

*******************************************************************************/
#include <stdio.h>

double divisao(int n1, int n2)
{
    return (n1 / n2);
}


void main()
{
    int n1, n2;
    printf("Digite o dividendo: \n");
    scanf("%d", &n1);
    do {
    printf("Digite o divisor (nao pode ser 0): \n");
    scanf("%d", &n2);
    } while (n2 == 0);
    
    printf("O resultado da divisao dos dois numeros e: %d \n", divisao(n1,n2));
}
