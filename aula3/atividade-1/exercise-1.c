//Escreva um programa que, dado duas datas, determine qual delas ocorreu cronologicamente antes em relação a outra. Cada data é composta de 3 números inteiros, um representando o ano, outro o mês e outro o dia.

#include <stdio.h>
int main(){
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 < ano2 || (ano1 == ano2 && mes1 < mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 < dia2)) {
        printf("A primeira data é anterior à segunda data.\n");
    } else if (ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)) {
        printf("A segunda data é anterior à primeira data.\n");
    } else {
        printf("As duas datas são iguais.\n");
    }

    return 0;
}