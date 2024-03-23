/*
Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela.
*/

#include <stdio.h>

int main(){
    int id1, id2, id3, id4;
    float media;

    printf (" MÉDIA DA SOMA DE 4 IDADES. \n");

    printf ("\n Informe a idade 1: ");
    scanf ("%d", &id1);
    
    printf ("\n Informe a idade 2: ");
    scanf ("%d", &id2);

    printf ("\n Informe a idade 3: ");
    scanf ("%d", &id3);

    printf ("\n Informe a idade 4: ");
    scanf ("%d", &id4);
    
    media = (float)(id1+id2+id3+id4) / 4;

    printf ("\n A média aritmética das 4 idades é %f.\n", media);

    return 0;
    
}