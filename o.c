/*Escrever um programa que leia 25 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão do tipo vetor.
Construir uma matriz B de mesmos tipo e dimensão, em que
cada elemento da matriz B deve ser a conversão da
temperatura em graus Fahrenheit do elemento correspondente da matriz A. Apresentar os elementos das
matrizes A e B.*/

#include <stdio.h>

int main(){

    int c[25], f[25], i;
    
    printf("Digite 25 valores de temperatura em ºC: \n");

    for(i=0; i<25; i++){

        scanf("%d", &c[i]);

    }
    
    printf("\nOs valores das temperutas em ºC e ºF: \n");
    
    for(i=0; i<25; i++){

        f[i] = (c[i]*9/5) + 32;
        printf("%dºC  %dºF \n", c[i], f[i]);
    }

}