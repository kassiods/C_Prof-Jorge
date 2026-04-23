//3. Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

#include <stdio.h>
int main(){
    int decimal;
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    printf("O número decimal %d em hexadecimal é: %X\n", decimal, decimal);
    printf("O número decimal %d em octal é: %o\n", decimal, decimal);
}