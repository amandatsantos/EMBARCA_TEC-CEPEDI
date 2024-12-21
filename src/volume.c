#include <stdio.h>
#include <math.h>

// Funções para conversão entre as unidades
double litroParaMililitro(double litros) {
    return litros * 1000.0;
}

double litroParaMetroCubico(double litros) {
    return litros / 1000.0;
}

double mililitroParaLitro(double mililitros) {
    return mililitros / 1000.0;
}

double mililitroParaMetroCubico(double mililitros) {
    return mililitros / 1000000.0;
}

double metroCubicoParaLitro(double metrosCubicos) {
    return metrosCubicos * 1000.0;
}

double metroCubicoParaMililitro(double metrosCubicos) {
    return metrosCubicos * 1000000.0;
}

void exibirMenu() {
    int opcao;
    double valor, resultado;

    do {
        printf("\nConversor de Unidades de Volume\n");
        printf("1. Litro para Mililitro\n");
        printf("2. Litro para Metro Cubico\n");
        printf("3. Mililitro para Litro\n");
        printf("4. Mililitro para Metro Cubico\n");
        printf("5. Metro Cubico para Litro\n");
        printf("6. Metro Cubico para Mililitro\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

         if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            while (scanf("%lf", &valor) != 1) {
                printf("Entrada Invalida. Por favor, insira um numero.\n");
                while (getchar() != '\n'); // Limpa o buffer
                printf("Digite o valor a ser convertido: ");
          }

        }

        if (opcao == 1) {
            resultado = litroParaMililitro(valor);
            printf("%.2lf litros = %.2lf mililitros\n", valor, resultado);
        } else if (opcao == 2) {
            resultado = litroParaMetroCubico(valor);
            printf("%.2lf litros = %.6lf metros cubicos \n", valor, resultado);
        } else if (opcao == 3) {
            resultado = mililitroParaLitro(valor);
            printf("%.2lf mililitros = %.2lf litros \n", valor, resultado);
        } else if (opcao == 4) {
            resultado = mililitroParaMetroCubico(valor);
            printf("%.2lf mililitros = %.6lf metros cubicos\n", valor, resultado);
        } else if (opcao == 5) {
            resultado = metroCubicoParaLitro(valor);
            printf("%.2lf metros cubicos = %.2lf litros\n", valor, resultado);
        } else if (opcao == 6) {
            resultado = metroCubicoParaMililitro(valor);
            printf("%.2lf metros cubicos = %.2lf mililitros\n", valor, resultado);
        } else if (opcao == 7) {
            printf("Saindo do programa.\n");
        } else {
            printf("Opco invalida. Tente novamente.\n");
        }

    } while (opcao != 7);
}
