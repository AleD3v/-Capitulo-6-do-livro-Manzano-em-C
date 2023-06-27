/*Elaborar um programa que leia uma matriz A do tipo vetor
com 15 elementos inteiros. Construir uma matriz B de
mesmo tipo, e cada elemento da matriz B deve ser o
resultado da fatorial correspondente de cada elemento da
matriz A. Apresentar as matrizes A e B.*/

#include <stdio.h>

int main(){

    int a[15], b[15];

    printf("Digite 15 valores para a matriz a: \n");

    for(int i=0; i<15; i++){

        scanf("%d", &a[i]);
        int fatorial = a[i];
        int resultado = 1;

        for(;fatorial>=1; fatorial--){
            resultado*=fatorial;
        }
        b[i]=resultado;
        
    }
    for(int i=0; i<15; i++){

        printf(" a[%d]  b[%d]\n", a[i], b[i]);

    }

}