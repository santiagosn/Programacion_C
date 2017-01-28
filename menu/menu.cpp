#include <stdio.h>
#include <stdlib.h>

int main(){


 int opcion=0;

system("clear");
system("toilet -F border -fpagga  MENU");

        printf("1.- Ropa\n");
        printf("2.- Juegos\n");
        printf("3.- Comida\n");
        printf("4.- Electrodomesticos\n");
        printf("Indica la opcion: ");
        scanf("%d", &opcion);
       
        switch(opcion){ 

        case 1: printf("Camiseta.\n");
                break;
        case 2: printf("LOL.\n");
                break;
        case 3: printf("Pan.\n");
                break;
        case 4: printf("Tetera.\n");
                break;
     }
  return EXIT_SUCCESS;
}

