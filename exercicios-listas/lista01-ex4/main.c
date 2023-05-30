/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 01 - Ex 04 - 15/02/2023

*******************************************************************************/
#include <stdio.h>

void main() {
    int qtdMacas;
    double custoTotal;
    
    printf("Digite a quantidade de macas que deseja comprar. \n");
    scanf("%d",&qtdMacas);
    
    if (qtdMacas >= 12) {
        custoTotal = qtdMacas * 1;
        printf("O custo total é: %lf", custoTotal);
    } else {
        custoTotal = qtdMacas * 1.3;
        printf("O custo total é: %lf", custoTotal);
    }
}



