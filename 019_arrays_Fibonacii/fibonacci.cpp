#include <stdio.h>
#include <stdlib.h>

int main () {

	int anterior1 = 1, anterior2 = 1, actual, contador = 2;	
	
	printf(" %i, %i,", anterior1, anterior2);

	do{
		actual = anterior1 + anterior2;
		printf(" %i,", actual);
		
		anterior1 = anterior2;
		anterior2 = actual;
		contador++;

	}while(contador < 20);
	
	printf(" \n");
	
	return EXIT_SUCCESS;
}
 
 
