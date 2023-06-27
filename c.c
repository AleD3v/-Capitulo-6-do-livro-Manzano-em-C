/*Escrever um programa que leia duas matrizes
(denominadas A e B) do tipo vetor com 20 elementos reais.
Construir uma matriz C, sendo cada elemento da matriz C a
subtração de um elemento correspondente da matriz A com
um elemento correspondente da matriz B, ou seja, a
operação de processamento deve estar baseada na
operação C[I] ← A[I] – B[I]. Ao final, apresentar os
elementos da matriz C.*/

#include <stdio.h>

int main(){

    int a[20], b[20], c[20];

    printf("Digite 20 valores para a matriz a: \n");

    for(int i=0; i<20; i++){
        scanf("%d", &a[i]);
    }

    printf("\nDigite 20 valores para a matriz b: \n");

    for(int i=0; i<20; i++){

        scanf("%d", &b[i]);

    }
    
    printf("\nOs valores da matriz c são: \n");

    for(int i=0; i<20; i++){

        c[i]=a[i]-b[i];
        printf("%d\n", c[i]);
    }

    
}