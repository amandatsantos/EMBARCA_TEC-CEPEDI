#include <stdio.h>

void tempo()
{
    int Conversao;
    float Tempoincial, Tempofinal;

    //entrada de dados, solicitando qual conversao desejada 
    printf("####Conversao de Tempo####\n");
    printf(" 1 - segundo para minuto\n 2 - Segundo para hora\n ");
    printf("3 - Minuto para segundo\n 4 - Minuto para Hora\n ");
    printf("5 - Hora para segundo\n 6 - Hora  para Minuto\n ");

    printf("Informe o numero correspondente a conversao desejada\n");
    scanf("%d", &Conversao);
    printf("Informe o tempo inicial\n");
    scanf("%f", &Tempoincial);
    //cases para cada Conversao
    switch (Conversao)
    {
    case 1:
        Tempofinal=Tempoincial/60;
        printf(" Tempo em Segundo: %.2f\n Tempo em Minuto:%.2f\n ", Tempoincial, Tempofinal);
        break;
    case 2:
        Tempofinal=Tempoincial/3600;
        printf(" Tempo em Segundo: %.2f\n Tempo em Hora: %.2f\n ", Tempoincial, Tempofinal);
        break;
    case 3:
        Tempofinal=Tempoincial*60;
        printf(" Tempo em Minuto: %.2f\n Tempo em Segundo: %.2f\n ", Tempoincial, Tempofinal);
        break;
    case 4:
        Tempofinal=Tempoincial/60;
        printf(" Tempo em Minuto: %.2f\n Tempo em Hora: %.2f ", Tempoincial, Tempofinal);
        break;
    case 5:
        Tempofinal=Tempoincial*3600;
        printf(" Tempo em Hora: %.2f\n Tempo em Segundo: %.2f\n ", Tempoincial, Tempofinal);
        break;
    case 6:
        Tempofinal=Tempoincial*60;
        printf(" Tempo em Hora: %.2f\n Tempo em Minuto: %.2f\n ", Tempoincial, Tempofinal);
        break;
    default:
        break;
    }
}
int main(){
    tempo();
    return 0;
}
