/*
Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($). 
*/

#include <stdio.h>

int main(){
    float real, cot, dolar;

    printf (" CONVERÇÃO DE REAL PARA DÓLAR. \n");

    printf ("\n Informe o valor em Real que será convertido: ");
    scanf ("%f", &real);

    printf ("\n Informe a cotação atual do Dólar: ");
    scanf ("%f", &cot);
    
    dolar = real / cot;

    printf ("\n---------------------------------------------------\n");

    printf ("\n Cotação do Dólar: R$ %.2f\n", cot);
    printf ("\n Valor em Real: R$ %.2f\n", real);
    printf ("\n Valor em Dólar: $ %.2f\n", dolar);

    return 0;
    
}