/*
4) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos.
*/

#include <stdio.h>

int main(){
    int a, b, c, soma;
    printf ("\n Quadrado da soma de 3 valores. ");
    printf ("\n Informe um valor para A: ");
    scanf ("%d", &a);

    printf ("\n Informe um valor para B: ");
    scanf ("%d", &b);

    printf ("\n Informe um valor para C: ");
    scanf ("%d", &c);

    soma = (a+b+c) * (a+b+c);

    printf ("\n O quadrado da soma dos 3 valores é: %d \n", soma);

    return 0;
    
}