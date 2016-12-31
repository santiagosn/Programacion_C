#include <stdio.h>
#include <stdlib.h>

int main(){

int numero = 0, sumatotal, media;

 printf("Introduce 10 números: \n");
 for(int i = 0; i < 10; i++){

 printf("Número %i:", i+1 );
 scanf(" %i", &numero);

 sumatotal += numero;

 }

media = sumatotal/10;

 printf("La media es: %i.\n", media);

return EXIT_SUCCESS;
}



