/*Elaborar um programa que leia 15 elementos inteiros de
uma matriz A do tipo vetor. Construir uma matriz B de
mesmo tipo, observando a seguinte lei de formação: “todo
elemento da matriz B deve ser o quadrado do elemento da
matriz A correspondente”. Apresentar os elementos das
matrizes A e B.*/

#include <stdio.h>

int main(){

    int a[15], b[15];

    printf("Digite 15 valores para a matriz a: \n");

    for(int i=0; i<15; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<15; i++){

        b[i]=a[i]*a[i];
    }
    
    for(int i=0; i<15; i++){

        printf(" a[%d]  b[%d]\n", a[i], b[i]);
    }

}