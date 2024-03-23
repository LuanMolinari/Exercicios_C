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
