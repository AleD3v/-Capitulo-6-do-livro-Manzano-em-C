/*Elaborar um programa que leia uma matriz A do tipo vetor
com dez elementos inteiros. Construir uma matriz B de
mesmo tipo, em que cada elemento deve ser a metade
exata de cada um dos elementos existentes da matriz A.
Apresentar os elementos das matrizes A e B.*/

#include <stdio.h>

int main(){

    float a[10];
    float b[10];
    int i;

    printf("Digite 10 valores para a matriz a: \n");

    for(i=0; i<10; i++){

        scanf("%f", &a[i]);

    }
    printf("Matriz b: \n");
    for(i=0; i<10; i++){

        b[i]= a[i]/2;
        printf("[%.1f]\n", b[i]);
    }
}