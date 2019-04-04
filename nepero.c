/*

# exp

# Programmi di Laboratorio di Programmazione (Linguaggio "C"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "nepero.c": Programma che approssima il valore della costante "e" ("numero di Nepero") mediante la formula:
	     e = 1 + 1/1! + 1/2! + 1/3! + 1/4 + 1/n + ...
		 Il calcolo viene effettuato due volte: Nel primo caso utilizzando 10 termini. Nel secondo arrestando il ciclo quando il termine aggiunto non modifica più la terza cifra 
		 decimale della somma calcolata.

*/

#include <stdio.h>

int main () {

	int fatt=1,i;

	double e=1.0,prec;

	for ( i=1; i<10; i++ ) {
		fatt*=i;
		e+=1.0/(double)fatt;
	}

	printf("\"Numero di Nepero\"\t\"e\"\tcon 10 termini=\t%f\n",e);
	putchar('\n');

	fatt=1;

	e=1.0;

	prec=0;

	for ( i=1; e-prec>0.001; i++){
		prec=e;
		fatt*=i;
		e+=1.0/(double)fatt;
	}
	printf("\"Numero di Nepero\"\t\"e\"\tfino alla variazione della terza cifra decimale=\t%f\n",e);
	printf("Numero di termini utilizzati=\t%d\n",i);
	putchar('\n');

	return 0;
}