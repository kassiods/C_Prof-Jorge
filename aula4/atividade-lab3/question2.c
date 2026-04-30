//Dado um caracter, escreva na tela se esse caracter é uma letra minuscula.
#include <stdio.h>
int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    if (caracter >= 'a' && caracter <= 'z') {
        printf("O caracter '%c' é uma letra minúscula.\n", caracter);
    } else {
        printf("O caracter '%c' não é uma letra minúscula.\n", caracter);
    }

    return 0;
}