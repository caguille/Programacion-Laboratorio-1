#include <stdio.h>
#include <stdlib.h>

int validarEdad(int, int, int);

int main()
{
    int edad;

    printf("Ingrese edad del empleado: ");
    scanf("%d", &edad);

    while(!validarEdad(edad, 18, 70)){

            printf("Error. Reingrese edad del empleado: ");
            scanf("%d", &edad);

    }

    printf("\nEdad correcta");

    return 0;
}

int validarEdad(int edad, int min, int max)
{
  /*  if(edad>= 18 && edad <= 65){
        return 1;
    }
    else{
        return 0;
    }
    */

    int esValido = 0;

      if(edad>= min && edad <= max){
        esValido= 1;
    }

    return esValido;
}

