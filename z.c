/*Elaborar um programa que leia uma matriz A de uma
dimensão com dez elementos numéricos inteiros.
Apresentar o total de elementos ímpares existentes na
matriz e também o percentual do valor total de números
ímpares em relação à quantidade total de elementos
armazenados na matriz.*/

#include <stdio.h>

int main(){

    int a[15], i;
    float percentual, impar = 0;

    printf("Digite 10 valores: \n");

    for(i=0; i<10; i++){

        scanf("%d", &a[i]);

        if(a[i] % 2 != 0){

            impar++;
        }
    }
    printf("O total de números ímpares é: %.0f\n", impar);
    percentual = impar/10*100;
    printf("O %% de números ímpares em relação ao total é: %.2f%% \n", percentual);
}