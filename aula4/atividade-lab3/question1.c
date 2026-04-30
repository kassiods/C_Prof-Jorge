//Dada uma letra, escreva na tela se essa letra é vogal ou não (pode considerar apenas letras minúsculas).

#include <stdio.h>
int main() {
    char letra;

    printf("Digite uma letra minúscula: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra '%c' é uma vogal.\n", letra);
    } else {
        printf("A letra '%c' não é uma vogal.\n", letra);
    }

    return 0;
}