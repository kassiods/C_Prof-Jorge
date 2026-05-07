//crie um programa com um vetor para armazenar 100 notas.

#include <stdio.h>

int main() {
    float notas[100];
    int i;

    char resp;
    for (i = 0; i < 100; i++) {
        printf("Deseja adicionar a nota %d? (s/n): ", i + 1);
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S') {
            printf("Digite a nota %d: ", i + 1);
            scanf("%f", &notas[i]);
        } else {
            break;
        }
    }
    int totalNotas = i;

    printf("\nNotas digitadas:\n");
    for (i = 0; i < totalNotas; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}