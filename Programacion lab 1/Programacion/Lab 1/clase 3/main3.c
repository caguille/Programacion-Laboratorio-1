#include <stdio.h>
#include <stdlib.h>

int obtenerMayor(int, int, int);

int main()
{
  printf("%d", obtenerMayor(7, 7, 5));

    return 0;
}

int obtenerMayor(int x, int y , int z)
{
    int mayor;

    if(x > y && x > z)
    {
        mayor = x;
    }
    else if(y >= x && y > z)
    {
        mayor = y;
    }
    else
    {
        mayor = z;

    }


    return mayor;

}
