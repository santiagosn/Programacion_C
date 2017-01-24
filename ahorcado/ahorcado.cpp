#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)


const char *palabra[] = {"llave","telefono","ventana","celula","dinosaurio","espada","dragon",NULL};


int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX];
    int aleatoria;
    char letra[1];
    int fallos=0;

    system("clear");
    system("toilet -F border -fpagga AHORCADO");
      printf("\n");
   
srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    bzero(adivinado, MAX);
    	for (int i=0; i<(int) strlen(elegida); i++){
             adivinado[i] = '_';
	       printf(" %c ", adivinado[i]);

}

   do {
         printf("\nPon una letra\n");
         scanf("%c",letra);

     for (int i=0; i<(int) strlen(elegida); i++){

       if(elegida[i]==letra[0]){

			adivinado[i]=letra[0];}


			printf("%c",adivinado[i]);

			fallos++;

              
       }
  

  }while(fallos>=0);
	if (fallos>=5){
	  printf("GAME OVER");
}
   
    return EXIT_SUCCESS;

} 
