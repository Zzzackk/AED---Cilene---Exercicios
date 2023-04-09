/******************************************************************************

Isaac Vono Rodrigues | 2AN | 30/03/2023

AED2 | Lista de Exercicios | Exercicio 6

*******************************************************************************/

#include <stdio.h>

int num;

void drawStars()
{
    int i;
    for (i=0; i<num; i++)
    {
        printf("* ");
    }

}

void main()
{
    printf("Digite o numero de estrelas: ");
    scanf("%d", &num);
    drawStars(num);
}
