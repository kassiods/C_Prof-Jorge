//2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
#include <stdio.h>
int main(){
    int i, j;

    printf("Tabuada de 1 a 9:\n");
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}