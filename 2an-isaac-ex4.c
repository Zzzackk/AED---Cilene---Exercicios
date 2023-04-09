/******************************************************************************

Isaac Vono Rodrigues | 2AN | 30/03/2023

AED2 | Lista de Exercicios | Exercicio 4

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

double saldo;

void selectOp()
{
    int ph;
    printf("\nDigite 1 para deposito\nDigite 2 para saque\nDigite 3 para saldo\nDigite 4 para finalizar\n");
    scanf("%d", &ph);
    switch (ph)
    {
        case 1:
            double temp;
            printf("Digite o valor que deseja depositar: ");
            scanf("%lf", &temp);
            saldo += temp;
            printf("Voce depositou %.2lfR$. O seu saldo agora é: %.2lfR$", temp, saldo);
            selectOp();
        case 2:
            printf("Digite o valor que deseja sacar: ");
            scanf("%lf", &temp);
            if (saldo < temp) {
                printf("Saldo insuficiente.");
                selectOp();
                }
            saldo -= temp;
            printf("Voce sacou %.2lfR$. O seu saldo agora : %.2lfR$", temp, saldo);
            selectOp();
        case 3:
            printf("O seu saldo atual e: %.2lfR$", saldo);
            selectOp();
        case 4:
            printf("Finalizando a sua sessao...\nObrigado por usar o banco USCS.");
            exit(0);
        default:
            printf("Valor invalido!");
            selectOp();
    }
    
}

void main()
{
    printf("Bem vindo ao banco USCS. Selecione a operação que deseja realizar.\n");
    selectOp();
}
