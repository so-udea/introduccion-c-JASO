#include <stdio.h>

void main(){
    int n, resultado;

    printf("Ingrese el numero hasta el que llegara la tabla de multiplicar: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
}
