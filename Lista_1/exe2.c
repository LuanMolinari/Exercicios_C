#include <stdio.h>

int main(){
    int a, b, c;

    printf ("\n Informe um valor para A: ");
    scanf ("%d", &a);

    printf ("\n Informe um valor para B: ");
    scanf ("%d", &b);

    c = a;
    a = b;
    b = c;

    printf ("\n Valores Trocados: \n A: %d \n B: %d\n", a, b);

    return 0;
    
}
