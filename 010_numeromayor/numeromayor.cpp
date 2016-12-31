#include <stdio.h>
#include <stdlib.h>

int main () {

 int numero = 0, nmayor = 0;

 printf("Introduce 10 números:\n");
 for(int i = 0; i < 10; i++){

 printf("Número %i:", i+1 );		
 scanf(" %i", &numero);

 if(numero > nmayor)
 nmayor = numero;
	} 
	
 printf("El número mayor es el %i.\n", nmayor);

	return EXIT_SUCCESS;
}




