#include <stdio.h>
#include <stdlib.h>

int main(){

char jc[] = "Hola";

for(int i = 0; i < sizeof(jc)-1; i++)
printf(" %c", jc[i]+3);

printf(" \n"); 

  return EXIT_SUCCESS;
}
