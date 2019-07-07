#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int a, b, resultado, opcion;
    const char * resCorrectas[] = {"Muy bien!\n", "Excelente!\n", "Buen trabajo!\n", "Sigue haciendolo muy bien\n"};
    const char * resErroneas[] = {"No. Por Favor trata de nuevo\n", "Incorrecto, trata una vez mas\n", "No te rindas!\n", "No. Trata de nuevo\n"};
    do{
      srand(time(NULL));
      a = rand() % 10;
      b = rand() % 10;
      printf("¿Cúanto es %d veces %d?\n", a, b);
      scanf("%d", &resultado);
      if(resultado == a*b){
        printf("%s",resCorrectas[rand()%4]);
      }else{
        do{
          printf("%s", resErroneas[rand()%4]);
          printf("¿Cúanto es %d veces %d?\n", a, b);
          scanf("%d", &resultado);
        }while(resultado != a*b);
        printf("%s",resCorrectas[rand()%4]);
      }
      printf("Quieres continuar practicando? 1.Si | 2.No \n");
      scanf("%d", &resultado);
    }while(resultado == 1);
}
