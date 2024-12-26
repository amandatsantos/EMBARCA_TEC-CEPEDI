#include <stdio.h>
#include "temperatura.h"

// Funções de conversão
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusParaKelvin(double celsius) {
    return celsius + 273.15;
}

double kelvinParaCelsius(double kelvin) {
    return kelvin - 273.15;
}

double celsiusParaRankine(double celsius) {
    return (celsius + 273.15) * 9 / 5;
}

double rankineParaCelsius(double rankine) {
    return (rankine - 491.67) * 5 / 9;
}

double celsiusParaReaumur(double celsius) {
    return celsius * 4 / 5;
}

double reaumurParaCelsius(double reaumur) {
    return reaumur * 5 / 4;
}

// Funções intermediárias para conversão entre unidades não diretamente suportadas
double fahrenheitParaKelvin(double fahrenheit) {
    return celsiusParaKelvin(fahrenheitParaCelsius(fahrenheit));
}

double kelvinParaFahrenheit(double kelvin) {
    return celsiusParaFahrenheit(kelvinParaCelsius(kelvin));
}

double fahrenheitParaRankine(double fahrenheit) {
    return fahrenheit + 459.67;
}

double rankineParaFahrenheit(double rankine) {
    return rankine - 459.67;
}

double fahrenheitParaReaumur(double fahrenheit) {
    return celsiusParaReaumur(fahrenheitParaCelsius(fahrenheit));
}

double reaumurParaFahrenheit(double reaumur) {
    return celsiusParaFahrenheit(reaumurParaCelsius(reaumur));
}

double kelvinParaRankine(double kelvin) {
    return kelvin * 9 / 5;
}

double rankineParaKelvin(double rankine) {
    return rankine * 5 / 9;
}

double kelvinParaReaumur(double kelvin) {
    return celsiusParaReaumur(kelvinParaCelsius(kelvin));
}

double reaumurParaKelvin(double reaumur) {
    return celsiusParaKelvin(reaumurParaCelsius(reaumur));
}

void converterTemperatura() {
    double temperatura, resultado;
    int opcao;

    do {
        // Menu de opções
        printf("\n===== Conversor de Temperaturas =====\n");
        printf("Escolha a conversão desejada:\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Celsius para Kelvin\n");
        printf("4 - Kelvin para Celsius\n");
        printf("5 - Celsius para Rankine\n");
        printf("6 - Rankine para Celsius\n");
        printf("7 - Celsius para Réaumur\n");
        printf("8 - Réaumur para Celsius\n");
        printf("9 - Fahrenheit para Kelvin\n");
        printf("10 - Kelvin para Fahrenheit\n");
        printf("11 - Fahrenheit para Rankine\n");
        printf("12 - Rankine para Fahrenheit\n");
        printf("13 - Fahrenheit para Réaumur\n");
        printf("14 - Réaumur para Fahrenheit\n");
        printf("15 - Kelvin para Rankine\n");
        printf("16 - Rankine para Kelvin\n");
        printf("17 - Kelvin para Réaumur\n");
        printf("18 - Réaumur para Kelvin\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Celsius para Fahrenheit
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = celsiusParaFahrenheit(temperatura);
                printf("A temperatura em Fahrenheit é: %.2f°F\n", resultado);
                break;

            case 2: // Fahrenheit para Celsius
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = fahrenheitParaCelsius(temperatura);
                printf("A temperatura em Celsius é: %.2f°C\n", resultado);
                break;

            case 3: // Celsius para Kelvin
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = celsiusParaKelvin(temperatura);
                printf("A temperatura em Kelvin é: %.2fK\n", resultado);
                break;

            case 4: // Kelvin para Celsius
                printf("Digite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);
                resultado = kelvinParaCelsius(temperatura);
                printf("A temperatura em Celsius é: %.2f°C\n", resultado);
                break;

            case 5: // Celsius para Rankine
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = celsiusParaRankine(temperatura);
                printf("A temperatura em Rankine é: %.2f°R\n", resultado);
                break;

            case 6: // Rankine para Celsius
                printf("Digite a temperatura em Rankine: ");
                scanf("%lf", &temperatura);
                resultado = rankineParaCelsius(temperatura);
                printf("A temperatura em Celsius é: %.2f°C\n", resultado);
                break;

            case 7: // Celsius para Réaumur
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = celsiusParaReaumur(temperatura);
                printf("A temperatura em Réaumur é: %.2f°Ré\n", resultado);
                break;

            case 8: // Réaumur para Celsius
                printf("Digite a temperatura em Réaumur: ");
                scanf("%lf", &temperatura);
                resultado = reaumurParaCelsius(temperatura);
                printf("A temperatura em Celsius é: %.2f°C\n", resultado);
                break;

            case 9: // Fahrenheit para Kelvin
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = fahrenheitParaKelvin(temperatura);
                printf("A temperatura em Kelvin é: %.2fK\n", resultado);
                break;

            case 10: // Kelvin para Fahrenheit
                printf("Digite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);
                resultado = kelvinParaFahrenheit(temperatura);
                printf("A temperatura em Fahrenheit é: %.2f°F\n", resultado);
                break;

            case 11: // Fahrenheit para Rankine
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = fahrenheitParaRankine(temperatura);
                printf("A temperatura em Rankine é: %.2f°R\n", resultado);
                break;

            case 12: // Rankine para Fahrenheit
                printf("Digite a temperatura em Rankine: ");
                scanf("%lf", &temperatura);
                resultado = rankineParaFahrenheit(temperatura);
                printf("A temperatura em Fahrenheit é: %.2f°F\n", resultado);
                break;

            case 13: // Fahrenheit para Réaumur
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = fahrenheitParaReaumur(temperatura);
                printf("A temperatura em Réaumur é: %.2f°Ré\n", resultado);
                break;

            case 14: // Réaumur para Fahrenheit
                printf("Digite a temperatura em Réaumur: ");
                scanf("%lf", &temperatura);
                resultado = reaumurParaFahrenheit(temperatura);
                printf("A temperatura em Fahrenheit é: %.2f°F\n", resultado);
                break;

            case 15: // Kelvin para Rankine
                printf("Digite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);
                resultado = kelvinParaRankine(temperatura);
                printf("A temperatura em Rankine é: %.2f°R\n", resultado);
                break;

            case 16: // Rankine para Kelvin
                printf("Digite a temperatura em Rankine: ");
                scanf("%lf", &temperatura);
                resultado = rankineParaKelvin(temperatura);
                printf("A temperatura em Kelvin é: %.2fK\n", resultado);
                break;

            case 17: // Kelvin para Réaumur
                printf("Digite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);
                resultado = kelvinParaReaumur(temperatura);
                printf("A temperatura em Réaumur é: %.2f°Ré\n", resultado);
                break;

            case 18: // Réaumur para Kelvin
                printf("Digite a temperatura em Réaumur: ");
                scanf("%lf", &temperatura);
                resultado = reaumurParaKelvin(temperatura);
                printf("A temperatura em Kelvin é: %.2fK\n", resultado);
                break;

            case 0: // Sair
                printf("Saindo do programa. Até mais!\n");
                break;

            default: // Opção inválida
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0); // Continua até o usuário escolher sair
}
