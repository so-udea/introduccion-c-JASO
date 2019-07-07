#include <stdio.h>

int multiplo(int a, int b);

int main(){
  int a, b, resultado;
  printf("Ingrese el primer numero: ");
  scanf("%d",&a);
  printf("Ingrese el segundo numero: ");
  scanf("%d",&b);
  resultado = multiplo(a, b);
  if(resultado == 1){
    printf("%d es multiplo de %d\n", b, a);
  }else{
    printf("%d NO es multiplo de %d\n", b, a);
  }
}

int multiplo(int a, int b){
  if (b % a == 0){
    return 1;
  }else{
    return 0;
  }
}
