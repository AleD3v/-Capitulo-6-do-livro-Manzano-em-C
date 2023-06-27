/*Escrever um programa que leia três matrizes (A, B e C) de
uma dimensão do tipo vetor com cinco elementos cada que
sejam do tipo real. Construir uma matriz D, sendo esta o
resultado da junção das três matrizes (A, B e C). Destaforma, a matriz D deve ter o triplo de elementos das
matrizes A, B e C, ou seja, 15 elementos. Apresentar os
elementos da matriz D.*/

#include <stdio.h>

int main(){

    int a[5], b[5], c[5], d[15];
    int i;

    printf("Digite 5 valores para a matriz a: \n");

    for(i=0; i<5; i++){

        scanf("%d", &a[i]);
    }

    printf("\nDigite 5 valores para a matriz b: \n");

    for(i=0; i<5; i++){

        scanf("%d", &b[i]);
    }
    printf("\nDigite 5 valores para a matriz c: \n");

    for(i=0; i<5; i++){

        scanf("%d", &c[i]);
    }

    for(i=0; i<5; i++){

        d[i] = a[i];

    }
    for(i=0; i<5; i++){

        d[i+5] = b[i];

    }
    for(i=0; i<5; i++){

        d[i+10] = c[i];

    }
    printf("\nmatriz d: \n");

    for(i=0; i<15; i++){

        printf("[%d]\n", d[i]);
    }
}