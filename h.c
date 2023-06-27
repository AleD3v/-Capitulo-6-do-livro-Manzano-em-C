/*Elaborar um programa que leia 20 elementos do tipo real
em uma matriz A unidimensional e construir uma matriz B de
mesma dimensão com os mesmos elementos armazenados
na matriz A, porém de forma invertida. Ou seja, o primeiro
elemento da matriz A passa a ser o último da matriz B, o
segundo elemento da matriz A passa a ser o penúltimo da
matriz B, e assim por diante. Apresentar os elementos das
matrizes A e B.*/

#include <stdio.h>

int main(){

    int a[20], b[20];
    int i, j;

    printf("Digite 20 valores para a matriz a: \n");

    for(i=0; i<20; i++){

        scanf("%d", &a[i]);

    }

    for(i=0, j=20-1; i<20; i++, j--){

        b[j] = a[i];

    }

    for(i=0; i<20; i++){

        printf("a[%d]  b[%d]\n", a[i], b[i]);
    }

}
