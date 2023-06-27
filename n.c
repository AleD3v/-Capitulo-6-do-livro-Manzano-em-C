/*Elaborar um programa que leia 20 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão. O programa ao
final deve apresentar a menor, a maior e a média das
temperaturas lidas.*/

#include <stdio.h>

int main(){

    int c[20];
    int maior, menor, i, soma = 0;
    float media;
    printf("Digite 20 valores para a matriz c: \n");

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &c[i]);
        soma += c[i];
        
        if(i == 0){

            menor = c[i];
            maior = c[i];
        }else
        {
          if(c[i] < menor){
            menor = c[i];
          } 
          if(c[i] > maior){
            maior = c[i];
          }
        }
        
    }
    
    media = soma/20;

    printf("\nA maior temperatura é: %d\n", maior);
    printf("A menor temperatura é: %d \n", menor);
    printf("A média das temperaturas é: %.2f \n", media);
}