/*Elaborar um programa que leia duas matrizes A e B de uma
dimensão com seis elementos. A matriz A deve aceitar
apenas a entrada de valores pares, enquanto a matriz B
deve aceitar apenas a entrada de valores ímpares. A
entrada das matrizes deve ser validada pelo programa, e
não pelo usuário. Construir uma matriz C que seja o
resultado da junção das matrizes A e B, de modo que a
matriz C contenha 12 elementos. Apresentar os elementos
da matriz C.*/

#include <stdio.h>

int main(){

    int a[6], b[6], c[12];
    int i, num;
    int j = 0, k = 0;

    printf("Digite 12 valores: \n");

    for(i=0; i<12; i++){

        scanf("%d", &num);

        if(num % 2 == 0){

            a[j] = num;
            j++;
        }else{

            b[k] = num;
            k++;
        }
    }
    for(i=0; i<6; i++){

        c[i] = a[i];
        c[i+6] = b[i];
    }
    printf("\nMatriz c: \n");
    for(i=0; i<12; i++){

        printf("[%d]\n", c[i]);
    }
}