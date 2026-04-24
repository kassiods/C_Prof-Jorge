//Escreva um programa que calcule as raízes reais de uma equação de segundo grau, ou emita uma mensagem caso as mesmas não existam.

#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double delta, raiz1, raiz2;

    printf("Digite os coeficientes a, b e c da equação de segundo grau (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são: %.2lf e %.2lf\n", raiz1, raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("A única raiz real é: %.2lf\n", raiz1);
    } else {
        printf("Não existem raízes reais para esta equação.\n");
    }

    return 0;
}