/*
Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, soma;
    float result;

    printf ("\n [QUADRADO DA SOMA DE 3 VALORES.] ");
    printf ("\n Digite 3 números inteiros: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

    soma = (a+b+c);
    result = pow(soma,2);

    printf ("\n O quadrado da soma dos 3 valores é: %.1lf \n", result);

    return 0;
    
}