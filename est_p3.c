#include <stdio.h>

void main() {

  int numero;

  printf("Escriba el numero de renglones: ");
  scanf("%d", &numero);

  for(int i = 1; i<= numero; i++){
    for(int j = 1; j <= i; j++ ){
      if(i%2 == 1){
        printf("%d", j%2);
      }else{
        printf("%d", ((j+1)%2));
      }
    }
    printf("\n");
  }
}
