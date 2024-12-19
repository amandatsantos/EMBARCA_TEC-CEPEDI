#include "area.h"
#include <stdio.h>
#include "armazenamento_digital/armazenamento_digital.h"


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
                printf("\nFuncionalidade de comprimento em desenvolvimento...\n");
                break;
            case 2:
                // Função para conversão de massa
                printf("\nFuncionalidade de massa em desenvolvimento...\n");
                break;
            case 3:
                // Função para conversão de volume
                printf("\nFuncionalidade de volume em desenvolvimento...\n");
                break;
            case 4:
                // Função para conversão de temperatura
                printf("\nFuncionalidade de temperatura em desenvolvimento...\n");
                break;
            case 5:
                // Função para conversão de velocidade
                printf("\nFuncionalidade de velocidade em desenvolvimento...\n");
                break;
            case 6:
                // Função para conversão de potencia
                printf("\nFuncionalidade de potencia em desenvolvimento...\n");
                break;
            case 7:
                executar_conversao_area();
                break;
            case 8:
                // Função para conversão de tempo
                printf("\nFuncionalidade de tempo em desenvolvimento...\n");
                break;
            case 9:
                // Função para conversão de armazenamento digital
                conversaoArmazenamentoDigital();
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