//Quando um número é selecionado, o programa deve exibir uma breve descrição do prato. Por exemplo, ao digitar 1, o programa mostra: "Macarrão instantâneo"

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
            printf("Você escolheu Miojo. Macarrão instantâneo.\n");
            break;
        case 2:
            printf("Você escolheu Ensopado. Prato quente e reconfortante, feito com carne, legumes e caldo.\n");
            break;
        case 3:
            printf("Você escolheu Lasanha. Camadas de massa, molho, queijo e carne ou vegetais.\n");
            break;
        case 4:
            printf("Você escolheu Salada. Uma mistura fresca de vegetais, frutas e molhos.\n");
            break;
        case 5:
            printf("Você escolheu Sopa. Um prato líquido quente, feito com ingredientes variados como legumes, carne ou peixe.\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}