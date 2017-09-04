#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[]= {1,5,10};
    int flag =0;
    int num;
    printf ("Ingrese un numero");
    scanf ("%d\n",&num);

    for(int i=0;i<3;i++)
    {
        if (numero[i]==num)
        {


        printf ("el numero ingresado se encuentra en el vector %d\n",i + 1 );
        flag=1;
        break;
        }

    }

    if (flag==0)
    {
        printf("el numero no se encuentra en el vector");
    }






    //printf("Hello world!\n");
return 0;
}
