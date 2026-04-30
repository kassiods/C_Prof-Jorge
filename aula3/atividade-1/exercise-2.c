//Escreva um programa que, dado o comprimento de três segmentos de reta, determine se eles formam um triângulo e, caso formem, diga se o triângulo é equilátero, isóceles ou escaleno.

#include <stdio.h>
int main() {
    double a, b, c;

    printf("Digite o comprimento do primeiro segmento de reta: ");
    scanf("%lf", &a);
    printf("Digite o comprimento do segundo segmento de reta: ");
    scanf("%lf", &b);
    printf("Digite o comprimento do terceiro segmento de reta: ");
    scanf("%lf", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Os segmentos formam um triângulo equilátero.\n");
        } else if (a == b || b == c || a == c) {
            printf("Os segmentos formam um triângulo isósceles.\n");
        } else {
            printf("Os segmentos formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os segmentos não formam um triângulo.\n");
    }

    return 0;
}