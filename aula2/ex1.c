//somar, diminuir, multiplicar e dividir dois números
#include <stdio.h>
int main(){
    double a, b;
    double soma, subtracao, multiplicacao, divisao;
    
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("A soma de a e b é = %2.2lf\n", soma);
    printf("A subtração de a e b é = %2.2lf\n", subtracao);
    printf("A multiplicação de a e b é = %2.2lf\n", multiplicacao);
    printf("A divisão de a e b é = %2.2lf\n", divisao);
}