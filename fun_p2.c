#include <stdio.h>
#include <math.h>

long sumProgresion(int x, int n);

void main (){
  int x, n;

  printf("Ingrese el valor de x:\n");
  scanf("%d",&x);
  printf("Ingrese el valor de n:\n");
  scanf("%d", &n);
  printf("La suma de la progresion con x=%d y n=%d es igual a %ld\n", x, n, sumProgresion(x, n));
}


long sumProgresion(int x, int n){
  long suma = 0;
  for(int i = 0; i <= n; i++ ){
    suma = suma + pow(x,i);
  }
  return suma;
}
