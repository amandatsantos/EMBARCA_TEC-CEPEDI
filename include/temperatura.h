#ifndef TEMPERATURA_H
#define TEMPERATURA_H

// Declaração das funções de conversão de temperatura
double celsiusParaFahrenheit(double celsius);
double fahrenheitParaCelsius(double fahrenheit);
double celsiusParaKelvin(double celsius);
double kelvinParaCelsius(double kelvin);
double celsiusParaRankine(double celsius);
double rankineParaCelsius(double rankine);
double celsiusParaReaumur(double celsius);
double reaumurParaCelsius(double reaumur);

// Funções para conversão entre unidades não diretamente suportadas
double fahrenheitParaKelvin(double fahrenheit);
double kelvinParaFahrenheit(double kelvin);
double fahrenheitParaRankine(double fahrenheit);
double rankineParaFahrenheit(double rankine);
double fahrenheitParaReaumur(double fahrenheit);
double reaumurParaFahrenheit(double reaumur);
double kelvinParaRankine(double kelvin);
double rankineParaKelvin(double rankine);
double kelvinParaReaumur(double kelvin);
double reaumurParaKelvin(double reaumur);

// Declaração da função para exibir o menu e realizar a conversão
void converterTemperatura();

#endif // TEMPERATURA_H