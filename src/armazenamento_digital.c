#include <stdio.h>
#include "armazenamento_digital.h"

// Função para conversão de unidades de armazenamento digital
void conversaoArmazenamentoDigital() {
    double valor;
    int opcaoOrigem, opcaoDestino;
    // Definição das unidades em uma tabela de fatores de conversão
    const char *unidades[] = {"Bytes", "Kilobytes (KB)", "Megabytes (MB)", "Gigabytes (GB)", "Terabytes (TB)"};
    const long long fatoresConversao[] = {1LL, 1024LL, 1024LL * 1024LL, 1024LL * 1024LL * 1024LL, 1024LL * 1024LL * 1024LL * 1024LL};  // Fatores de conversão com 'long long'

    printf("\n### Conversor de Armazenamento Digital ###\n");
    printf("Unidades disponíveis:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s\n", i + 1, unidades[i]);
    }

    // Solicita a unidade de origem
    do {
        printf("\nEscolha a unidade de origem (1-5): ");
        if (scanf("%d", &opcaoOrigem) != 1 || opcaoOrigem < 1 || opcaoOrigem > 5) {
            printf("Opção inválida! Tente novamente.\n");
            while (getchar() != '\n');  // Limpa o buffer de entrada
            continue;
        }
        break;
    } while (1);

    // Solicita a unidade de destino
    do {
        printf("Escolha a unidade de destino (1-5): ");
        if (scanf("%d", &opcaoDestino) != 1 || opcaoDestino < 1 || opcaoDestino > 5) {
            printf("Opção inválida! Tente novamente.\n");
            while (getchar() != '\n');  // Limpa o buffer de entrada
            continue;
        }
        break;
    } while (1);

    // Solicita o valor a ser convertido
    do {
        printf("Digite o valor a ser convertido: ");
        if (scanf("%lf", &valor) != 1 || valor < 0) {
            printf("Valor inválido! Tente novamente.\n");
            while (getchar() != '\n');  // Limpa o buffer de entrada
            continue;
        }
        break;
    } while (1);

    // Conversão de acordo com os fatores
    double valorEmBytes = valor * fatoresConversao[opcaoOrigem - 1];
    double resultado = valorEmBytes / fatoresConversao[opcaoDestino - 1];

    // Exibe o resultado
    printf("\n%.2lf %s equivalem a %.2lf %s\n",
           valor, unidades[opcaoOrigem - 1], resultado, unidades[opcaoDestino - 1]);
}
