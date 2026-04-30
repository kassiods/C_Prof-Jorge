//Escreva um programa que mostre na tela um menu de pratos (pelo menos 5), cada um associado a um número.
//Prato 1 -Miojo
//Prato 2 -Ensopado
//Prato 3 -Lasanha
//Prato 4 -Salada
//Prato 5 -Sopa

#include <stdio.h>
int main() {
    int prato;

    printf("Menu de Pratos:\n");
    printf("1 - Miojo\n");
    printf("2 - Ensopado\n");
    printf("3 - Lasanha\n");
    printf("4 - Salada\n");
    printf("5 - Sopa\n");

    printf("Digite o número do prato desejado: ");
    scanf("%d", &prato);

    switch (prato) {
        case 1:
            printf("Você escolheu Miojo.\n");
            break;
        case 2:
            printf("Você escolheu Ensopado.\n");
            break;
        case 3:
            printf("Você escolheu Lasanha.\n");
            break;
        case 4:
            printf("Você escolheu Salada.\n");
            break;
        case 5:
            printf("Você escolheu Sopa.\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}