#include <stdio.h>
#include "area.h"

float metros_quadrados_para_centimetros_quadrados(float metros) {
    return metros * 10000;  // 1 m² = 10,000 cm²
}

float centimetros_quadrados_para_metros_quadrados(float centimetros) {
    return centimetros / 10000;  // 10,000 cm² = 1 m²
}

float metros_quadrados_para_quilometros_quadrados(float metros) {
    return metros / 1e6;  // 1 km² = 1,000,000 m²
}

float quilometros_quadrados_para_metros_quadrados(float quilometros) {
    return quilometros * 1e6;  // 1 km² = 1,000,000 m²
}

void executar_conversao_area() {
    float valor, resultado;
    int opcao;

    printf("\n### Conversão de Área ###\n");
    printf("1 - Metros quadrados para Centímetros quadrados\n");
    printf("2 - Centímetros quadrados para Metros quadrados\n");
    printf("3 - Metros quadrados para Quilômetros quadrados\n");
    printf("4 - Quilômetros quadrados para Metros quadrados\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            resultado = metros_quadrados_para_centimetros_quadrados(valor);
            printf("\n%.2f m² = %.2f cm²\n", valor, resultado);
            break;
        case 2:
            resultado = centimetros_quadrados_para_metros_quadrados(valor);
            printf("\n%.2f cm² = %.2f m²\n", valor, resultado);
            break;
        case 3:
            resultado = metros_quadrados_para_quilometros_quadrados(valor);
            printf("\n%.2f m² = %.2f km²\n", valor, resultado);
            break;
        case 4:
            resultado = quilometros_quadrados_para_metros_quadrados(valor);
            printf("\n%.2f km² = %.2f m²\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}
