/*Construir um programa que leia uma matriz A de uma
dimensão do tipo vetor com 30 elementos do tipo inteiro. Ao
final do programa, apresentar a quantidade de valores pares
e ímpares existentes na referida matriz.*/

#include <stdio.h>

int main(){

    int a[30], i, par = 0, impar = 0;

    printf("Digite 30 valores: \n");

    for(i=0; i<30; i++){

        scanf("%d", &a[i]);

        if(a[i] % 2 == 0){

            par++;
        }else{

            impar++;
        }
    }
    printf("\nA quantida de números pares é %d e a de ímpares é %d. \n", par, impar);

}