/*Construir um programa que calcule a tabuada de um valor
qualquer de 1 até 10 e armazene os resultados em uma
matriz A de uma dimensão. Apresentar os elementos da
matriz A.*/

#include <stdio.h>

int main(){

    int a[10], num, i, j, conta;

    printf("Digite um valor: \n");
    scanf("%d", &num);

    for(i=0, j=1; i<10; i++, j++){

        conta = num * j;

        a[i] = conta;

    }
    printf("\nMatriz a: \n");
    for(i=0; i<10; i++){
        printf("[%d]\n", a[i]);
    }
}