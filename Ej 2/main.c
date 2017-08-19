#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    printf ("ingrese un numero ");
    scanf ("%d",&numeroUno);
    printf ("ingrese un numero ");
    scanf ("%d",&numeroDos);
    resultado=numeroUno+numeroDos;
    printf ("El resultado es: %d",resultado);
    return 0;
}
