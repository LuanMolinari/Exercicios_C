/*
Escreva um algoritmo para ler dos valores para as variáveis A e B. O algoritmo deve efetuar a troca dos
valores, de forma que a variável A passe a possuir o valor de B e a variável B passe a possuir o valor de
A. O algoritmo deve apresentar os valores ao usuário, antes e depois da troca.
*/

#include <stdio.h>

int main(){
    int a, b, c;

    printf ("\n Informe um valor para A: ");
    scanf ("%d", &a);

    printf ("\n Informe um valor para B: ");
    scanf ("%d", &b);

    printf ("\n Valores antes da troca: \n A: %d \n B: %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf ("\n Valores trocados: \n A: %d \n B: %d\n", a, b);

    return 0;
    
}
