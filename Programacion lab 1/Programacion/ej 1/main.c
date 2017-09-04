#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float promedio;
    int acumulador;

    for (int cont=0;cont<5;cont++)
    {
         printf ("ingrese un numero: ");
         scanf ("%d",&numero);
         acumulador=numero+1;
    }
    promedio= (float) acumulador / 5;
    printf ("El promedio de los numeros %.2f", promedio);
    return 0;
}
