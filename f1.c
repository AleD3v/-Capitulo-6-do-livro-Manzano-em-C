/*Construir um programa que leia duas matrizes A e B do tipo
vetor com 15 elementos quaisquer inteiros. Construir uma
matriz C, sendo esta o resultado da junção das matrizes A e
B. Desta forma, a matriz C deve ter o dobro de elementos
em relação às matrizes A e B, ou seja, a matriz C deve
possuir 30 elementos. Apresentar a matriz C.*/

#include <stdio.h>

int main(){

    int a[15], b[15], c[30];

    printf("Digite 15 valores para a matriz a: \n");

    for(int i=0; i<15; i++){

        scanf("%d",&a[i]);
    }
    printf("\nDigite 15 valores para a matriz b: \n");
    for(int i=0; i<15; i++){

        scanf("%d",&b[i]);
    }

    for(int i=0; i<15; i++){

        c[i]= a[i];
        c[i+15]= b[i];
        
    }
    for(int i=0; i<30; i++){

        printf("[%d]\n", c[i]);

    }

}