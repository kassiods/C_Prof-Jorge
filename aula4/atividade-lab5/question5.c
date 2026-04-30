//Escreva um programa que recebe um operador aritmético e dois operandos e calcule a operação indicada. As operações possíveis são soma(+), subtração(-), multiplicação(*) e divisão(/).
//Ex: + 10 2
//imprime 12 na tela.

#include <stdio.h>
int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite um operador aritmético (+, -, *, /) seguido de dois números: ");
    scanf("%c %lf %lf", &operador, &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido. Por favor, use +, -, * ou /.\n");
            break;
    }

    return 0;
}