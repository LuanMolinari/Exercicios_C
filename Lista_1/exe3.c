/*
3) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado o
valor da soma dos quadrados dos três valores lidos.
*/

#include <stdio.h>

int main(){
    int a, b, c, soma;
    printf ("\n Soma do quadrado de 3 valores. ");
    printf ("\n Informe um valor para A: ");
    scanf ("%d", &a);

    printf ("\n Informe um valor para B: ");
    scanf ("%d", &b);

    printf ("\n Informe um valor para C: ");
    scanf ("%d", &c);

    soma = (a*a) + (b*b) + (c*c);

    printf ("\n A soma do quadrado dos 3 valores é: %d \n", soma);

    return 0;
    
}
