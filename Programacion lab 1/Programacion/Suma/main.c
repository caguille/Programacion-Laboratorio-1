#include <stdio.h>
#include <stdlib.h>
int obtenerMayor(int ,int, int);//prototipo/*No hace falta el nombre de las variables , no me importa como consigo los enteros*/
int main()
{
    int n1;
    int n2;
    int n3;

    printf("Ingerese numero ");
    scanf("%d",&n1);

    printf("Ingerese numero ");
    scanf("%d",&n2);

    printf("Ingerese numero ");
    scanf("%d",&n3);

    printf("El numero mayor es %d",obtenerMayor(n1,n2,n3));

    return 0;
}
int obtenerMayor(int num1, int num2, int num3)/*recibe los numeros calcula la funcion, nos absttraemos de main, van a venir desde la llamada num1 y num 2
                                                    */
{

    if(num1>num2 && num1> num3)
    {
        printf("El numero mayor %d ",num1);
    }
    else if (num2>num1 && num2> num3)
    {
        printf("El numero mayor es %d ",num2);
    }
    else if (num3>num2 && num3>num1)
    {
        printf("El numero mayor es %d " ,num3);
    }

    return obtenerMayor;
}
