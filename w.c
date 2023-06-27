/*Elaborar um programa que leia duas matrizes A e B de uma
dimensão do tipo vetor com dez elementos inteiros cada.
Construir uma matriz C de mesmos tipo e dimensão que
seja formada pelo quadrado da soma dos elementos
correspondentes nas matrizes A e B. Apresentar os
elementos da matriz C.*/

#include <stdio.h>

int main(){

    int a[10], b[10], c[10], i;

    printf("Digite 10 valores para a matriz a e 10 para a b: \n");

    for(i=0; i<10; i++){

        scanf("%d", &a[i]);
        
    }
    for(i=0; i<10; i++){

        scanf("%d", &b[i]);
        
    }
    printf("\nMatriz c: \n");
    for(i=0; i<10; i++){
        c[i] = (a[i]+b[i]) * (a[i]+b[i]);
        printf("\nc[%d] = %d \n", i, c[i]);
    }
}