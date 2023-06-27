/*Elaborar um programa que leia duas matrizes do tipo vetor
para o armazenamento de nomes de pessoas, sendo a
matriz A com 20 elementos e a matriz B com 30 elementos.
Construir uma matriz C, sendo esta a junção das matrizes A
e B. Desta forma, a matriz C deve ter a capacidade de
armazenar 50 elementos. Apresentar os elementos da
matriz C.*/

#include <stdio.h>

int main(){

    char a[20][50], b[30][50], c[50][50];
    int i, j;

    printf("Digite 20 nomes para a matriz a: \n");

    for(i=0; i<20; i++){

        scanf("%s", a[i]);
    }

    printf("\nDigite 30 nomes para a matriz b: \n");

    for(i=0; i<30; i++){

        scanf("%s", b[i]);
    
    }

    for(i=0; i<20; i++){

        for(j=0; a[i][j] != '\0'; j++ ){

            c[i][j] = a[i][j];
        }
        c[i][j] = '\0';
    }

    for(i=0; i<30; i++){
 
        for(j=0; b[i][j] !=0; j++){

            c[i+20][j] = b[i][j];
        }
        c[i + 20][j] = '\0';
    }

    printf("\nMatriz c: \n");

    for(i=0; i<50; i++){

        printf("[%s]\n",c[i]);
    }
}