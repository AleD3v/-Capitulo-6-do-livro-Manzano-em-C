/*Elaborar um programa que leia 12 elementos inteiros para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que for
ímpar deve ser multiplicado por 2; caso contrário, o
elemento da matriz A deve permanecer constante”.
Apresentar os elementos da matriz B.*/

#include <stdio.h>

int main(){

    int a[12], b[12], i;

    printf("Digite 12 valores: \n");

    for(i=0; i<12; i++){

        scanf("%d", &a[i]);

        if(a[i]%2 != 0){
            b[i] = 2*a[i];
        }else{

            b[i] = a[i];
        }
    }
    
    printf("\nMatriz b: \n");
    
    for(i=0; i<12; i++){

        printf("[%d]\n", b[i]);
    }

  
}