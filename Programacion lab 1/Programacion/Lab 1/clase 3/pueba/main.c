#include <stdio.h>
#include <stdlib.h>
int obtenerMayor (int ,int, int );


int main()
{
    int num1;
    int num2;
    int num3;

    printf("ingrese un numero");
    scanf("%d",&num1);


    printf("ingrese un numero");
    scanf("%d",&num2);


    printf("ingrese un numero");
    scanf("%d",&num3);


    obtenerMayor(num1,num2,num3);


    return 0;
}

int obtenerMayor (int num1, int num2, int num3)
if (num1>num2 && num1>num3)
{
    printf("es el maximo");
}
else if (num2>num1 && num2>num3)
{
    printf("es el maximo");
}
else if (num3>num1 && num3>num2)
{
    printf("es el maximo");
}

return obtenerMayor;
