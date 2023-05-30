/******************************************************************************

AED2 - ATIVIDADE PARA AP
Assunto: Aplicação de Bandas Musicais
Conteúdo: structs, vetor de structs, menus, validação de dados

Nomes: Isaac / Ettore
Data: 03/05/2023

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banda {
    char nome[50];
    char tipoMusical[20];
    int qtInt;
    int rank;
};

void menu();
void buscarPorNome();
void leBanda(struct Banda *vetor, int *tamanho);
void listarTodos(struct Banda *vetor, int tamanho);
struct Banda vetor[100];
int main()
{
    struct Banda vetor[100];
    int tamanho = 0;
    menu(vetor, &tamanho);
    return 0;
}

void menu(struct Banda *vetor, int *tamanho)
{
    int opcao = 0;
    printf("\nQual operacao que deseja realizar:\n(1)Buscar por nome\n(2)Listar todas\n(3)Ler banda\n(9)Sair\n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            buscarPorNome(vetor, *tamanho);
            break;
        case 2:
            listarTodos(vetor, *tamanho);
            break;
        case 3: 
            leBanda(vetor, tamanho);
            break;
        case 9:
            printf("Programa finalizado.");
            exit(0);
        default:
            printf("Não é válido!\n");
    }
    menu(vetor, tamanho);
}

void leBanda(struct Banda *vetor, int *tamanho) {
    printf("\nNome da banda: ");
    scanf("%s", vetor[*tamanho].nome);
    printf("Estilo musical: ");
    scanf("%s", vetor[*tamanho].tipoMusical);
    printf("Numero de integrantes: ");
    scanf("%d", &vetor[*tamanho].qtInt);
    printf("Ranking das banda entre suas bandas favoritas: ");
    scanf("%d", &vetor[*tamanho].rank);
    (*tamanho)++;
}

void listarTodos(struct Banda *vetor, int tamanho) {
    printf("\nTodas as bandas listadas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s\n", vetor[i].nome);
        printf("Tipo: %s\n", vetor[i].tipoMusical);
        printf("Integrantes: %d\n", vetor[i].qtInt);
        printf("Rank: %d\n\n", vetor[i].rank);
    }
}

void buscarPorNome(struct Banda *vetor, int tamanho) {
    char nomeBusca[50];
    printf("\nNome da banda para buscar: ");
    scanf("%s", nomeBusca);
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(vetor[i].nome, nomeBusca) == 0) {
            printf("Nome: %s\n", vetor[i].nome);
            printf("Tipo: %s\n", vetor[i].tipoMusical);
            printf("Integrantes: %d\n", vetor[i].qtInt);
            printf("Rank: %d\n\n", vetor[i].rank);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Não foi encontrada nenhuma banda.\n");
    }
}