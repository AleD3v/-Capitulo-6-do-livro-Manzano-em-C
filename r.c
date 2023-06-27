/*Elaborar um programa que leia seis elementos (valores
inteiros) para as matrizes A e B de uma dimensão do tipo
vetor. Construir as matrizes C e D de mesmo tipo e
dimensão. A matriz C deve ser formada pelos elementos deíndice ímpar das matrizes A e B e a matriz D deve ser
formada pelos elementos de índice par das matrizes A e B.
Apresentar os elementos das matrizes C e D.*/

#include <stdio.h>

int main(){

    int a[6], b[6], c[6], d[6];
    int i, j;

    printf("Digite 6 valores para o vetor a: \n");

    for(i=0; i<6; i++){

        scanf("%d", &a[i]);

    }

    printf("\nDigite 6 valores para o vetor b: \n");

    for(i=0; i<6; i++){

        scanf("%d", &b[i]);
    }
    printf("\nVetor c: \n");

    for(i=1, j=0; i<6; i+=2, j++){

        c[j] = a[i];
        c[j+1] = b[i];
        printf("\n[%d]\n", c[j]);
    }

    printf("\nVetor d: \n");

    for(i=0, j=0; i<6; i+=2, j++){

        d[j] = a[i];
        d[j+1] = b[i];
        printf("\n[%d]\n", d[j]);
    }
}