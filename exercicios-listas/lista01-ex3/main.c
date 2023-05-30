/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 01 - Ex 03 - 15/02/2023

*******************************************************************************/
#include <stdio.h>

int main()
{
    int carrosVendidos;
    double salarioFinal, valorTotal, salarioFixo, valorPorCarro;
    
    printf("Digite o numero de carros que você vendeu:\n");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total de carros vendidos por voce, seu salario fixo, e o valor que voce recebe por carro, em ordem:\n");
    scanf("%lf %lf %lf", &valorTotal, &salarioFixo, &valorPorCarro);
    
    salarioFinal = (valorTotal * 0.05) + salarioFixo + (carrosVendidos * valorPorCarro);
    
    printf("O salário final fica: %lf \n",salarioFinal);
    
    return 0;
}


