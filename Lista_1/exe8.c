/*
Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.
*/

#include <stdio.h>

int main(){
    int idade, dobro, triplo;

    printf (" DOBRO E TRIPLO DA IDADE. \n");

    printf ("\n Informe a sua idade: ");
    scanf ("%d", &idade);
    
    dobro = idade * 2;
    triplo = idade * 3;

    printf ("\n O dobro da sua idade é %d anos, e o triplo é %d anos.\n", dobro, triplo);

    return 0;
    
}