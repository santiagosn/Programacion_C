#include <stdio.h>
#include <stdlib.h>

int main(){

int nombre[]={83,97,110,116,105,97,103,111};

for(int i=0;i<sizeof(nombre)/sizeof(int);i++)
printf("%c",nombre[i]);

printf("\n");


   return 0;}

