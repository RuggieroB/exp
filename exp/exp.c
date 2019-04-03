/*

# exp

# Programmi di Laboratorio di Programmazione (Linguaggio "C"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "exp.c": Programma che approssima il valore di "e^x" mediante la formula:
	     e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + x^n/n + ...
		   Si utilizzano 10 termini della serie.
		   Il risultato ottenuto viene confrontato con quello calcolato mediante la funzione "exp()" della libreria matematica.

*/

#include <stdio.h>

#include <math.h>

int main () {

	int fatt=1,i;

	double x=0,xn,ex=1;
	
	printf("Inserire il valore di \"x\":\n");
	printf("x=\t");
	scanf("%lf",&x);
	xn=x;
	putchar('\n');
	
	/* Con funzione "exp()" della libreria matematica: */
	
	printf("\"e^x\" con funzione \"exp()\" della libreria matematica=\t%f\n",exp(x));
	putchar('\n');
	
	/*******************************************************************************************************************************************************************************/

	/* Approssimazione del valore di "e^x" mediante la formula: e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + x^n/n + ... */

	for ( i=1; i<10; i++ ) {
		fatt*=i;
		ex+=xn/(double)fatt;
		xn*=x;
	}
	printf("\"e^x\" con 10 termini della serie=\t%f\n",ex);
	putchar('\n');
	return 0;
}