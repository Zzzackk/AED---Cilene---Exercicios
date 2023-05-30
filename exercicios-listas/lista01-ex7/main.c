/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Lista 01 - Ex 07 - 15/02/2023

*******************************************************************************/
#include <stdio.h>

void main() {
    int i, n1, n2, soma;
    printf("Digite dois numeros. \n");
    scanf("%d %d", &n1, &n2);
    
    for (i= n1 + 1; i < n2 ; i++) {
        soma += i;
    }
    
    printf("A soma entre os dois numeros e %d", soma);
}

