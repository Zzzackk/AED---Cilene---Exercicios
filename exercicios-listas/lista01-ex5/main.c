/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 01 - Ex 05 - 15/02/2023

*******************************************************************************/
#include <stdio.h>

void main() {
    double salarioFixo, valorVendas, comissao;
    
    printf("Digite o seu salario fixo e o seu valor total de vendas, em ordem. \n");
    scanf("%lf %lf", &salarioFixo, &valorVendas);
    
    if (valorVendas >= 1500) {
        comissao = ((valorVendas - 1500) * 0.05) + (1500 * 0.03);
    } else {
        comissao = valorVendas * 0.03;
    }
    
    printf("O valor total do seu salario e %lf",comissao + salarioFixo);
}


