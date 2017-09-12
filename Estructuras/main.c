#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1

typedef struct
{
  int legajo;
  char nombre[50];
  int edad;
  float peso;
  char sintoma[50];
}ePaciente;

void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void cargarPacientes(ePaciente[], int);
void ordenarPacientes (ePaciente[],int);
void generarDatos(ePaciente [],int);

int main()
{

    generarDatos(listaPacientes, TAM);
    ePaciente listaPacientes[TAM];
    cargarPacientes (listaPacientes, TAM);
    ePaciente paciente2;


    mostrarTodosLosPacientes(listaPacientes, TAM);




    return 0;
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        mostrarPaciente(lista[i]);
    }

}

void mostrarPaciente(ePaciente paciente)
{
      printf("%d--%s--%d--%f--%s\n", paciente.legajo,paciente.nombre, paciente.edad, paciente.peso, paciente.sintoma);
}

void generarDatos(ePaciente listaPacientes [], int datos)
{
    int leg []={1,2,3,4,5};
    char nombre[][50]={"Pedro","Juana","Alberto","Cristian","Sofia"};
    int edad []={70,15,55,40,21};
    float peso []={60,50,71,93,54};
    char sintoma[][50]={"dolor cabeza","dolor cabeza","Reuma","diabetes","dolor cabeza"};

    for (i=0;i<TAM;i++){
        listaPacientes[i].legajo=leg [i];
        strcpy(listaPacientes[i].nombre,nombre[i]);
        listaPacientes[i].edad=edad[i];
        listaPacientes[i].peso=peso[i];
    }


    int i, j;
    ePaciente auxpacientes;
    for (i=0;i<TAM-1;i++){
        for (i=i+1=;i<TAM;i++){
            if (stricmp (listaPacientes[i].nombre,listaPacientes[j].nombre)>0){



            }

        }

    }
}


void cargarPacientes(ePaciente listaPacientes [], int carga)
{
     int i;

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &listaPacientes[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(listaPacientes[i].nombre);

        printf("Ingrese edad: ");
        scanf("%d", &listaPacientes[i].edad);

        printf("Ingrese peso: ");
        scanf("%f", &listaPacientes[i].peso);
        printf("Ingrese sintoma: ");
        fflush(stdin);
        gets(listaPacientes[i].sintoma);

    }
}
