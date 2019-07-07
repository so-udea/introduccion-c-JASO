#include <math.h> 
#include <stdio.h>


int Reversar(int numero)

{
    int num=numero, aux,salida=0;
    
    while(num > 0)
    {
        aux= num%10;
        salida=salida*10+aux;
        num=num/10;
    }
    return salida;
    
}

int main()
{
    int  x,continuar;
    do {
        printf("Ingrese el numero a Invertir: ");
        scanf("%d",&x);
        
        
        printf("\n El numero obtenido es : %d", Reversar(x));
        
        printf("\n\nSi desea hacer otro calculo Ingrese 1, Otro valor para terminar: ");
        scanf("%d",&continuar);
        
    }while(continuar == 1);
    
    return 0; 
}
