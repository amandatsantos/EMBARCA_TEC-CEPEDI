/*m_s = km_h/3,6
km_h = m_s * 3,6
mph = km_h * 0.621371*/ 
#include <stdio.h>
double min_segundos (double km_h);
double km_horas (double m_s);
double milhas_horas (double km_h);

int main(){
    printf("m/s = %.2f", min_segundos(5));
    printf("\nkm/h = %.2f", km_horas(10));
    printf("\nmph = %.2f", milhas_horas(36));
}
double min_segundos (double km_h){
    double m_s = km_h / 3.6;
    return m_s;
}

double km_horas (double m_s){
    double km_h = m_s * 3.6;
    return km_h;
}

double milhas_horas (double km_h){
    double mph = km_h * 0.621371;
    return mph;
}