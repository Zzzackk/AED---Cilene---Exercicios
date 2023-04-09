/******************************************************************************

Isaac Vono Rodrigues | 2AN | 30/03/2023

AED2 | Lista de Exercicios | Exercicio 1

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int dif(int n1, int n2)
{
    return (n1-n2);
}


void main()
{
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("A diferenca entre os dois numeros e %d",dif(n1,n2));
    
}
