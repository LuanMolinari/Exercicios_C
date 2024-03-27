/*
Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles.
*/

#include <stdio.h>

int main () {
	
	int a, b, c;
	float div;

	printf ("[OPERAÇÕES ARITMÉTICAS]\n\n");

	printf ("Digite 2 números: \n");
	scanf ("%d", &a);
	scanf ("%d", &b);

	c = a+b;
	printf ("\n %d + %d = %d\n", a, b, c);

	c = a-b;
	printf (" %d - %d = %d\n", a, b, c);

	c = a*b;
	printf (" %d x %d = %d\n", a, b, c);

	div = (float)a/b;
	printf (" %d : %d = %f\n", a, b, div);

	return 0;
}