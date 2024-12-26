#include <stdio.h>
#include <stdbool.h>
#include "area.h"
#include "velocidade.h"
#include "armazenamento_digital.h"
#include "volume.h"
#include "tempo.h"
#include "temperatura.h"
#include "comprimento.h"
#include "massa.h"
#include "potencia.h"

int le_int(char mensagem[])
{
    int a = 0;
    do
    {
        puts(mensagem);
        if (scanf("%d", &a)){
            return a;
        }
        puts("Erro ao ler número. Redigite.");

        // Limpeza de buffer
        int lido = 0;
        do
        {
            lido = getchar();
        } while (lido != '\n' && lido != EOF);
    } while (true);
}


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
        escolha = le_int("Escolha uma opção: ");

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
                // Chamada da funcionalidade de temperatura
                converterTemperatura();
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
                executar_conversao_area();
                break;
            case 8:
                // Função para conversão de tempo
                tempo();
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
