#include <stdio.h>

float comision(int z);

void main() {
  int x;
  int y;
    do{
      printf("Introduzca el total de ventas: ");
      scanf("%d", &x);
      printf("La comision por el total de ventas es : %.3f\n", comision(x));
      printf("desea calcular una nueva comision? 1.si / 2.no ");
      scanf("%d", &y);
    }while(y == 1);
}

float comision(int z){
  if(z < 0){
    return 0;
  }else if(z < 20000){
    return z*0.05;
  }else if(z < 50001){
    return ((z*0.07/20000) + 1000);
  }else{
    return ((z*0.1/50000) + 3100);
  }
}
