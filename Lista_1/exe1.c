/*
Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume,
mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema.
*/

#include <stdio.h>

    float PI = 3.14;

int main(){
    float r, h, vol;

    printf ("\n Informe o raio da base do cilindro: ");
    scanf ("%f", &r);

    printf ("\n Informe a altura do cilindro: ");
    scanf ("%f", &h);

    vol = PI * r * r * h;

    printf ("\n O volume do cilindro é: %f \n", vol);

    return 0;
    
}
