//ler dois vetores de dimesao 5 e computar o produto interno deles

#include <stdio.h> 
int main() {
    float vetorA[5], vetorB[5];
    int i;
    float produtoInterno = 0;

    printf("Digite os elementos do vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetorA[i]);
    }

    printf("\nDigite os elementos do vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetorB[i]);
    }

    for (i = 0; i < 5; i++) {
        produtoInterno += vetorA[i] * vetorB[i];
    }

    printf("\nO produto interno dos vetores A e B é: %.2f\n", produtoInterno);

    return 0;
}