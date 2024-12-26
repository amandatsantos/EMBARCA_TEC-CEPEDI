/*m_s = km_h/3,6
km_h = m_s * 3,6
mph = km_h * 0.621371*/ 
#include "velocidade.h"
#include <stdio.h>
#include <stdbool.h>

static double min_segundos (double km_h){
    double m_s = km_h / 3.6;
    return m_s;
}

static double km_horas (double m_s){
    double km_h = m_s * 3.6;
    return km_h;
}

static double milhas_horas (double km_h){
    double mph = km_h * 0.621371;
    return mph;
}

void execucao_da_solicitacao_de_conversao() {
    double valor; 
    int opcao; bool rodando;

    do{
        // Menu de opções para conversão das unidades de velocidade
        printf("\n\tCONVERSÃO DE UNIDADES DE VELOCIDADE");
        printf("\n___________________________________________________\n\nEscolha o tipo de conversão que deseja realizar:\n");
        printf("1 - Converter km/h para m/s\n");
        printf("2 - Converter m/s para km/h\n");
        printf("3 - Converter km/h para mph\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        rodando = true;
        switch (opcao) {
            case 1:
                printf("\nDigite o valor em km/h: ");
                scanf("%lf", &valor);
                printf("\nConvertendo km/h para m/s\n%.2f km/h corresponde a %.2f m/s\n", valor, min_segundos(valor));
                break;
            case 2:
                printf("\nDigite o valor em m/s: ");
                scanf("%lf", &valor);
                printf("\nConvertendo m/s para km/h\n%.2f corresponde a %.2f km/h", valor, km_horas(valor));
                break;
            case 3:
                printf("\nDigite o valor em km/h: ");
                scanf("%lf", &valor);
                printf("\nConvertendo km/s para mph\n%.2f corresponde a %.2f mph", valor, milhas_horas(valor));
                break;
            case 0:
                rodando = false;
                printf("\nSaindo...\n");
                break;
            default:
            printf("\nOpção inválida! Tente novamente.\n");

    }
    } while (rodando);
        
}