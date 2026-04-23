//1. Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>
int main(){
    double metros, decimetros, centimetros, milimetros;

    printf("Digite o valor em metros: ");
    scanf("%lf", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("%2.2lf metros é igual a %2.2lf decímetros\n", metros, decimetros);
    printf("%2.2lf metros é igual a %2.2lf centímetros\n", metros, centimetros);
    printf("%2.2lf metros é igual a %2.2lf milímetros\n", metros, milimetros);
}