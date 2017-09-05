#include <stdio.h>
#include <stdlib.h>



void mostrarAlumnos(int[], int[], int[], float[], int);
void mostrarAlumno(int, int, int, float);
void calcularPromedios( int[], int[], float[], int);
void ordenarAlumnosLegAsc(int[], int[], int[], float[], int);


int main()
{
    int leg[]={128, 356, 198, 215, 320};
    int n1[]={2, 2, 2, 7, 10};
    int n2[]={7, 2, 8, 6, 9};
    float promedios[5];


    calcularPromedios(n1, n2, promedios, 5);

    mostrarAlumnos(leg, n1, n2, promedios, 5);

    ordenarAlumnosLegAsc(leg, n1, n2, promedios, 5);



    mostrarAlumnos(leg, n1, n2, promedios, 5);


    return 0;
}

void mostrarAlumnos(int leg[], int n1[], int n2[], float promedios[], int tam){

     printf("\n Legajo Nota1  Nota2 Promedio\n");
     printf("\n ----------------------------\n\n");

    for(int i=0; i<5; i++){

        mostrarAlumno(leg[i], n1[i], n2[i], promedios[i]);
    }

    printf("\n ----------------------------\n\n");

}

void calcularPromedios( int n1[], int n2[], float promedios[], int tam){


for(int i=0; i<5; i++){
        promedios[i]= (float) (n1[i] + n2[i]) / 2;
    }

}

void mostrarAlumno(int leg, int n1, int n2, float promedio){

     printf("  %4d  %4d  %4d     %4.2f \n", leg, n1, n2, promedio);
}

void ordenarAlumnosLegAsc( int leg[], int n1[], int n2[], float promedios[], int tam){

     int aux;
    float auxFloat;

  for(int i=0; i< 4; i++){
        for(int j = i+1; j < 5; j++ ){

                if(leg[i] > leg[j])
                {
                    aux = leg[j];
                    leg[j] = leg[i];
                    leg[i] = aux;

                     aux = n1[j];
                    n1[j] = n1[i];
                    n1[i] = aux;

                     aux = n2[j];
                    n2[j] = n2[i];
                    n2[i] = aux;

                     auxFloat = promedios[j];
                    promedios[j] = promedios[i];
                    promedios[i] = auxFloat;

                }
        }
     }

}


