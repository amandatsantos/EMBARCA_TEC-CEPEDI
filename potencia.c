#include <stdio.h>
//Potência (Watts)
//Conversões entre: Watts (W), quilowatts (kW), cavalos-vapor (CV ou HP).
//Arquivo: potencia.c

int potencia() {
    float watts = 0, kilowatts = 0, cavaloVapor = 0;
    int opcao = 0;

    // Escolha da unidade de medida que deseja converter
    printf("Caro usuario\nEscolha a unidade de medida de potencia que deseja converter:\n");
    printf("1 - Watts (W) \n2 - quilowatts (kW) \n3 - cavalos-vapor (CV ou HP)\n");
    scanf("%d", &opcao);

    switch(opcao){
        //Opcao Watts escolhida
        case 1:
        printf("Digite a potencia em Watts (W): \n");
        scanf("%f", &watts);

        kilowatts = watts / 1000;
        cavaloVapor = watts / 735.5;

        printf("A potencia %.2f W equivale a:\n %.2f kilowatts\n %.2f cavalo-vapor\n", watts, kilowatts, cavaloVapor);
        break;

        //Opcao Quilowatts escolhida
        case 2:
        printf("Digite a potencia em quilowatts (kW): \n");
        scanf("%f", &kilowatts);

        watts = kilowatts * 1000;
        cavaloVapor = kilowatts * 1.36;

        printf("A potencia %.2f kW equivale a:\n %.2f Watts\n %.2f cavalo-vapor\n", kilowatts, watts, cavaloVapor);
        break;

        //Opcao Cavalo-vapor escolhida
        case 3:
        printf("Digite a potencia em cavalos-vapor (CV ou HP): \n");
        scanf("%f", &cavaloVapor);

        watts = cavaloVapor * 735.5;
        kilowatts = cavaloVapor * 0.7355;

        printf("A potencia %.2f cv equivale a:\n %.2f Watts\n %.2f kilowatts\n", cavaloVapor, watts, kilowatts);
        break;

        //Caso o usuario escolha uma opcao invalida
        default:
        printf("Escolha uma opcao valida!\n");
        return 0;
    }
}