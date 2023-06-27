/*Elaborar um programa que efetue a leitura de dez nomes de
pessoas em uma matriz A do tipo vetor e apresentá-los em
seguida.*/

#include <stdio.h>

int main(){

    char nome[10][50];
    printf("Digite os nomes das pessoas:\n");

    for(int i=0; i<10; i++){

        scanf(" %s", nome[i]);

    }
    printf("\n");
    printf("Os nomes digitados foram: \n");
    for(int i=0; i<10; i++){

        printf("%s \n", nome[i]);
    }
}