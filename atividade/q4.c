//4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.
//a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0)* (5.0/9.0).
//b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).

#include <stdio.h>
int main(){
    double fahrenheit_double, celsius_double;
    int fahrenheit_int, celsius_int;

    // Parte a)
    printf("Digite um valor em graus Fahrenheit (double): ");
    scanf("%lf", &fahrenheit_double);
    celsius_double = (fahrenheit_double - 32.0) * (5.0 / 9.0);
    printf("O valor em graus Celsius (double) é: %2.2lf\n", celsius_double);

    // Parte b)
    printf("Digite um valor em graus Fahrenheit (int): ");
    scanf("%d", &fahrenheit_int);
    celsius_int = (fahrenheit_int - 32) * (5 / 9);
    printf("O valor em graus Celsius (int) é: %d\n", celsius_int);

    return 0;
}