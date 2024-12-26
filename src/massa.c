#include <stdio.h>
#include <math.h>

int massa()
{
    int var1, var2, pot1, pot2;
    float nro;

    // Entrada de dados
    printf("1 - grama\n2 - kilograma\n3 - tonelada\n");
    printf("Escreva o numero correspondente a unidade de medida original: ");
    scanf("%i", &var1);

    printf("Escreva o numero correspondente a unidade de medida a ser convertido: ");
    scanf("%i", &var2);

    printf("Escreva qual o numero que deseja converter: ");
    scanf("%f", &nro); 

    // Definição dos potências para a unidade de medida original
    if (var1 == 1) // Grama
    {
        pot1 = 6;
    }
    else if (var1 == 2) // Kilograma
    {
        pot1 = 3;
    }
    else if (var1 == 3) // Tonelada
    {
        pot1 = 0;
    }
    else
    {
        printf("Unidade original invalida!\n");
        return 1; // Encerra o programa com erro
    }

    // Definição dos potências para a unidade de medida convertida
    if (var2 == 1) // Grama
    {
        pot2 = 6;
    }
    else if (var2 == 2) // Kilograma
    {
        pot2 = 3;
    }
    else if (var2 == 3) // Tonelada
    {
        pot2 = 0;
    }
    else
    {
        printf("Unidade de conversao invalida!\n");
        return 1; // Encerra o programa com erro
    }

    // Cálculo da conversão
    int PotF = pot2 - pot1; // Diferença das potências
    float elev = pow(10, PotF);
    float resultado = nro * elev; // Cálculo final

    // Saída do resultado
    printf("A conversao de %.3f ", nro);
    switch (var1)
    {
    case 1: printf("gramas "); break;
    case 2: printf("kilogramas "); break;
    case 3: printf("toneladas "); break;
    }
    printf("para ");
    switch (var2)
    {
    case 1: printf("gramas "); break;
    case 2: printf("kilogramas "); break;
    case 3: printf("toneladas "); break;
    }
    printf("eh: %f\n", resultado);

    //Dica sobre conversão feita no programa
    printf("Dica: para realizar a conversao de ");
    switch (var1)
    {
    case 1: printf("gramas "); break;
    case 2: printf("kilogramas "); break;
    case 3: printf("toneladas "); break;
    }
    printf("para ");
    switch (var2)
    {
    case 1: printf("gramas "); break;
    case 2: printf("kilogramas "); break;
    case 3: printf("toneladas "); break;
    }
    if(PotF > 0){
        printf("multiplicar o numero por %.f",elev);
    }
    else if(PotF < 0){
        int PotF2 = PotF * -1;
        elev = pow(10, PotF2);
        printf("dividir o numero por %.f",elev);
    }

    return 0;
}
