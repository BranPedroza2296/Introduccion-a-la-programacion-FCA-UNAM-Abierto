#include <stdio.h>
int main()
{
    int a;
    printf("Por favor, introduzca un numero o una letra\n");
    if (scanf("%i", &a))
    {
        printf("Usted a ingresado un numero\n", a);
    }
    else
        printf("Usted ha ingresado una letra\n");
    return 0;
}