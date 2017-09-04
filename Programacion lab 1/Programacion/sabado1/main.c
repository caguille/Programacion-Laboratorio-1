#include <stdio.h>
#include <stdlib.h>

int main()
{
char ingreso;
char sexo;
int nota;
int cantM=0;
int cantF=0;
int legajo;
int maxNota;

do
{
    printf("ingrese nota del alumno :");
    scanf("%d",&nota);
    while (nota<1||nota>10)
    {
        printf("Reingrese nota del alumno :");
        scanf("%d",&nota);

    }
    printf("ingrese el sexo :");
    fflush(stdin);
    scanf("%c",&sexo);

    while(sexo!='m'&&sexo!='f')
    {
        printf("ingrese el sexo :");
        fflush(stdin);
        scanf("%c",&sexo);
    }
    printf("ingrese legajo :");
    scanf("%d",&legajo);


    printf("desea seguir ingresando? :");
    fflush(stdin);
    scanf("%c",&ingreso);

}while (ingreso=='s');



}

