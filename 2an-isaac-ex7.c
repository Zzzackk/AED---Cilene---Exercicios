/******************************************************************************

Isaac Vono Rodrigues | 2AN | 30/03/2023

AED2 | Lista de Exercicios | Exercicio 7

*******************************************************************************/

#include <stdio.h>
#include <math.h>

double cubo(double num)
{
    return pow(num, 3);
}

void main()
{
    double num;
    printf("Digite o valor que deseja retornar ao cubo: ");
    scanf("%lf", &num);
    printf("O cubo do numero %.2lf é %.2lf",num, cubo(num));
}
