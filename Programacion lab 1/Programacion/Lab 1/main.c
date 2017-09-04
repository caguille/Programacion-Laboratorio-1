#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante;
    char caracter;
    printf("ingrese un entero :");
    scanf("%d",&entero);
    printf("ingrese un flotante :");
    scanf("%f",&flotante);
    printf("ingrese un caracter :");
    caracter=getche();
    printf("\n");
    printf("El entero es: %d\nEl flotante es: %2f\nEl caracter es: %c",entero,flotante,caracter);
    return 0;
}
