//5. Fazer um programa em "C" que solicite 2 números e informe:
//a) A soma dos números;
//b) O produto do primeiro número pelo quadrado do segundo;
//c) O quadrado do primeiro número;
//d) A raiz quadrada da soma dos quadrados;
//e) O seno da diferença do primeiro número pelo segundo;
//f) O módulo do primeiro número.

#include <stdio.h>
#include <math.h>
int main(){
    double num1, num2;
    double soma, produto, quadrado_num1, raiz_quadrada, seno_diferenca, modulo;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // a) Soma dos números
    soma = num1 + num2;

    // b) Produto do primeiro número pelo quadrado do segundo
    produto = num1 * pow(num2, 2);

    // c) Quadrado do primeiro número
    quadrado_num1 = pow(num1, 2);

    // d) Raiz quadrada da soma dos quadrados
    raiz_quadrada = sqrt(pow(num1, 2) + pow(num2, 2));

    // e) Seno da diferença do primeiro número pelo segundo
    seno_diferenca = sin(num1 - num2);

    // f) Módulo do primeiro número
    modulo = fabs(num1);

    printf("a) A soma dos números é: %2.2lf\n", soma);
    printf("b) O produto do primeiro número pelo quadrado do segundo é: %2.2lf\n", produto);
    printf("c) O quadrado do primeiro número é: %2.2lf\n", quadrado_num1);
    printf("d) A raiz quadrada da soma dos quadrados é: %2.2lf\n", raiz_quadrada);
    printf("e) O seno da diferença do primeiro número pelo segundo é: %2.2lf\n", seno_diferenca);
    printf("f) O módulo do primeiro número é: %2.2lf\n", modulo);

    return 0;
}