#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validarCaracter(char, char, char);

int main()
{
if(validarCaracter('s', 's', 'n'))
{
   printf("Es valido\n");
}
else
{
     printf("No es valido\n");
}
    return 0;
}

int validarCaracter(char caracterAValidar, char caracter1, char caracter2)
{
    int esValido = 0;
    caracterAValidar = tolower(caracterAValidar);
    if(caracterAValidar == caracter1 || caracterAValidar==caracter2 )
    {
        esValido = 1;
    }

    return esValido;
}
