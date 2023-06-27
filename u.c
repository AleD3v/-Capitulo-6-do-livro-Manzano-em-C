/*Elaborar um programa que leia duas matrizes A e B de uma
dimensão com 12 elementos. A matriz A deve aceitar
apenas a entrada de valores divisíveis por 2 ou 3, enquanto
a matriz B deve aceitar apenas a entrada de valores que
não sejam múltiplos de 5. A entrada das matrizes deve ser
validada pelo programa, e não pelo usuário. Construir uma
matriz C que seja o resultado da junção das matrizes A e B,
de forma que contenha 24 elementos. Apresentar os
elementos da matriz C.*/

#include <stdio.h>

int main(){

    int a[12], b[12], c[24];
    int i, j = 0, k = 0, num;

    printf("Digite 24 valores: \n");

    for(i=0; i<24; i++){

        scanf("%d", &num);

        if(num % 2 == 0 && num % 3 == 0){

            a[j] = num;
            j++;
        }
        if(num % 5 != 0){

            b[k] = num;
            k++;
        }
    } 
    
    for(i=0; i<12; i++){

        c[i] = a[i];
        c[i+12] = b[i];
        
    }  
    printf("\nMatriz c: \n");
    for(i=0; i<24; i++){
        printf("\nc[%d]: %d\n", i, c[i]);
    }

}