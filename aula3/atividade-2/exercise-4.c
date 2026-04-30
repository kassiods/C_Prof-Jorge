//Escreva um programa que ordene três números. Tente encontrar uma versão com apenas 3 comandos if

#include <stdio.h>
int main() {
    double a, b, c, temp;

    printf("Digite três números: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }
    if (a > b) {
        temp = a; a = b; b = temp;
    }

    printf("Números ordenados: %.2lf %.2lf %.2lf\n", a, b, c);

    return 0;
}