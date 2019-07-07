#include <math.h> 
#include <stdio.h> 
  
// Funcion que obtiene la serie : 1 - x^2/2! + x^4/4! - ...
// Recibe como argumento el numero a remplzar en x, y el numero de terminos.

double Serie(double x, int n) 

{ 
    double suma = 1, term = 1, factorial, j, y = 2, m; 
  
    //se suman los n-1 terminnos empezando desde el segundo termino
    int i; 
    for (i = 1; i < n; i++) { 
        factorial = 1; 
        for (j = 1; j <= y; j++) { 
            factorial = factorial * j; 
        } 
        term = term * (-1); 
        m = term * pow(x, y) / factorial; 
        suma = suma + m; 
        y += 2; 
    } 
    return suma; 
} 
  
// inicia el programa
int main() 
{   
    int continuar;
    double x;
    int  n;
    do {
        printf("Ingrese el valor de en entrada x: ");
        scanf("%lf",&x);
        
        printf("Ingrese el minos:Numero de terminnos: ");
        scanf("%d",&n);
        
        printf("\n La suma de la serie es : %.4f", Serie(x, n));
        
        printf("\n\nSi desea hacer otro calculo Ingrese 1, Otro valor para terminar: ");
        scanf("%d",&continuar);
        
    }while(continuar == 1);
    
    return 0; 
}
