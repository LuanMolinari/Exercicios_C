/*
Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12
*/

#include <stdio.h>

int main(){
    int d;
    float l;

    printf (" CÁLCULO DE CONSUMO DE COMBUSTÍVEL. \n");

    printf ("\n Informe a distância do trajeto (em km): ");
    scanf ("%d", &d);
    
    l = (float)d / 12;

    printf ("\n O veículo faz em média 12Km/L, então em %dKm irá utilizar %f Litros\n", d, l);

    return 0;
    
}