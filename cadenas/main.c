#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[15];
    char apellido[18];
    char apenom[35];
    char aux[100];

    printf("Ingrese nombre y apellido\n");
    fflush(stdin);
    gets(aux);
    while (strlen(aux)>15){

        printf("reingrese el nombre");
        fflush(stdin);
        gets(aux);

    }
    strcpy(nombre,aux);
    printf("%s",nombre);




    //printf("%s %s",nombre,apellido);








    //rintf("Hello world!\n");
    return 0;
}
