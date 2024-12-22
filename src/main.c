#include <stdio.h>
#include "area.h"
#include "velocidade.h"
#include "armazenamento_digital.h"
#include "volume.h"
#include "tempo.h"
#include "comprimento.h"
#include "massa.h"
#include "potencia.h"

int main() {
    int escolha;

    do {
        printf("\n### Conversor de Unidades ###\n");
        printf("1 - Comprimento\n");
        printf("2 - Massa\n");
        printf("3 - Volume\n");
        printf("4 - Temperatura\n");
        printf("5 - Velocidade\n");
        printf("6 - Potencia\n");
        printf("7 - Área\n");
        printf("8 - Tempo\n");
        printf("9 - Armazenamento Digital\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Função para conversão de comprimento
                comprimento();
                break;
            case 2:
                // Função para conversão de massa
                massa();
                break;
            case 3:
                // Função para conversão de volume
                 exibirMenu();
                break;
            case 4:
                // Função para conversão de temperatura
                printf("\nFuncionalidade de temperatura em desenvolvimento...\n");
                break;
            case 5:
                // Função para conversão de velocidade
                execucao_da_solicitacao_de_conversao();
                break;
            case 6:
                // Função para conversão de potencia
                potencia();
                break;
            case 7:
                printf("\nFuncionalidade de área em desenvolvimento...\n");
                break;
            case 8:
                // Função para conversão de tempo
                tempo();
                break;
            case 9:
                // Função para conversão de armazenamento digital
                printf("\nFuncionalidade de armazenamento digital em desenvolvimento...\n");
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}
