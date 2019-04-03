 /*


# exp

# Programmi di Laboratorio di Programmazione (Linguaggio "C"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "fattoriale.c": Programma calcola il fattoriale di un intero non negativo letto in input.

*/

#include <stdio.h>

int main () {

	int num,fatt=1,i;

	do {
		printf("Inserire un numero intero non negativo compreso tra 1 e 15:\t");
		scanf("%d",&num);
		putchar('\n');
		if ( num<1 )	printf("ERRORE! Valore inserito minore di 1!");
		else if ( num>15 )	printf("ERRORE! Valore inserito maggiore di 15!");
		/* No 'else' for this 'if' */
		putchar('\n');
	} while ( num<1 || num>15 );
	putchar('\n');

	for ( i=1; i<=num; i++ )	fatt*=i;

	printf("Fattoriale del numero\t%d\t=\t%d\n",num,fatt);

	return 0;
}