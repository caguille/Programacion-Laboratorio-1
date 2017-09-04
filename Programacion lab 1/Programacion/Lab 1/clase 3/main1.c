#include <stdio.h>
#include <stdlib.h>

int sumar1(int , int);
void sumar2(int , int);
int sumar3(void);
void sumar4(void);


int main()
{
 sumar4();
    return 0;
}

int sumar1(int num1, int num2){
return num1 + num2;
}

void sumar2(int num1, int num2){

    int total;

     total =  num1+ num2;

  printf("\n\nLa suma es %d",total);
}

int sumar3(void)
{
    int x;
    int y;


    printf("Ingrese un numero:");
    scanf("%d", &x);

    printf("Ingrese otro numero:");
    scanf("%d", &y);

    return x + y;


}

void sumar4(void)
{
     int x;
    int y;
       int total;


    printf("Ingrese un numero:");
    scanf("%d", &x);

    printf("Ingrese otro numero:");
    scanf("%d", &y);



     total =  x+ y;

  printf("\n\nLa suma es %d",total);
}



