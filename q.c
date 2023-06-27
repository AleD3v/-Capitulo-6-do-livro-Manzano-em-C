/*Elaborar um programa que leia 15 elementos reais para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que
possuir índice par deve ter seu elemento dividido por 2; caso
contrário, o elemento da matriz A deve ser multiplicado por
1.5”. Apresentar os elementos da matriz B.*/

#include <stdio.h>

int main(){

    int a[15];
    float b[15];
    int i;

    printf("Digite 15 valores: \n");

    for(i=0; i<15; i++){

        scanf("%d", &a[i]);

        if(a[i] % 2 != 0){
            b[i] = (1.5)*a[i];
        }else{

            b[i] = a[i]/2;
        }
    }
    
    printf("\nMatriz b: \n");
    
    for(i=0; i<15; i++){

        printf("[%.2f]\n", b[i]);
    }

  
}