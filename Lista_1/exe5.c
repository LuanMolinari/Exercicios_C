/*
Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles.
*/

#include <stdio.h>

int main(){
    int a, b, c, soma, sub, mult;
    float div;

    printf ("\n OPERAÇÕES ARITMÉTICAS. \n");

    printf ("\n Informe o primeiro valor: ");
    scanf ("%d", &a);

    printf ("\n Informe o segundo valor: ");
    scanf ("%d", &b);
    
    soma = a + b;
    printf ("\n %d + %d = %d\n", a, b, soma);

    sub = a - b;
    printf ("\n %d - %d = %d\n", a, b, sub);

    mult = a * b;
    printf ("\n %d x %d = %d\n", a, b, mult);

    div = (float)a / b;
    printf ("\n %d : %d = %f\n", a, b, div);

    return 0;
    
}