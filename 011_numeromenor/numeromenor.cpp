#include <stdio.h>
#include <stdlib.h>

int main () {

 int numero = 0, nmenor = 0;

 printf("Introduce 10 números:\n");
 for(int i = 0; i < 10; i++){

 printf("Número %i:", i+1 );		
 scanf(" %i", &numero); 

 if( i == 0)
 nmenor = numero;

 if(numero < nmenor)
 nmenor = numero;
	} 
	
 printf("El número menor es el %i.\n", nmenor);

	return EXIT_SUCCESS;
}



