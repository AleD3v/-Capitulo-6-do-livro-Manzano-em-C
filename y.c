/*Escrever um programa que leia uma matriz A de uma
dimensão com 15 elementos numéricos inteiros. Apresentar
o total de elementos pares existentes na matriz.*/

#include <stdio.h>

int main(){

    int a[15], par = 0, i;

    printf("Digite 15 valores: \n");

    for(i=0; i<15; i++){

        scanf("%d", &a[i]);

        if(a[i] % 2 == 0){

            par++;
        }
    }
    printf("O total de números pares é: %d\n", par);
}