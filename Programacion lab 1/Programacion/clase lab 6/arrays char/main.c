#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vec [5];

    for(int i=0;i<5;i++){
        printf("ingrese una vocal: ");
        fflush(stdin);
        vec[i]=getchar();
    }
    printf("\nLos caracteres ingresados fueron: \n\n");

    for (int i=0;i<5;i++){
        printf("%c",vec[i]);
    }
    printf("\n\n");
    return 0;
}



