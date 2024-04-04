/*
Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume,
mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema.
*/

#include <stdio.h>

    float PI = 3.14;

int main(){
    float r, h, vol;
    char unidade[20];

    printf ("\n Escolha a unidade de medida utilizada (metros ou centímetros): "); //exibir a unidade de medida utilizada no resultado final.
    scanf ("%19s", &unidade);

    printf ("\n Informe o raio da base do cilindro: ");
    scanf ("%f", &r);

    printf ("\n Informe a altura do cilindro: ");
    scanf ("%f", &h);

    vol = PI * r * r * h;

    printf ("\n O volume do cilindro é: %.2f %s³ \n", vol, unidade);

    return 0;
    
}
