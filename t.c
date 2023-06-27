/*Escrever um programa que leia duas matrizes A e B de uma
dimensão com dez elementos. A matriz A deve aceitar
apenas a entrada de valores divisíveis por 2 e 3, enquanto a
matriz B deve aceitar apenas a entrada de valores múltiplos
de 5. A entrada das matrizes deve ser validada pelo
programa, e não pelo usuário. Construir uma matriz C que
seja o resultado da junção das matrizes A e B, de modo que
contenha 20 elementos. Apresentar os elementos da matriz
C.*/

#include <stdio.h>

int main(){

    int a[10], b[10], c[20];
    int i, j = 0, k = 0, num;

    printf("Digite 20 valores: \n");

    for(i=0; i<20; i++){

        scanf("%d", &num);

        if(num % 2 == 0 && num % 3 == 0){

            a[j] = num;
            j++;
        }
        if(num % 5 == 0){

            b[k] = num;
            k++;
        }
    } 
    
    for(i=0; i<10; i++){

        c[i] = a[i];
        c[i+10] = b[i];
        
    }  
    printf("\nMatriz c: \n");
    for(i=0; i<20; i++){
        printf("\nc[%d]: %d\n", i, c[i]);
    }

}