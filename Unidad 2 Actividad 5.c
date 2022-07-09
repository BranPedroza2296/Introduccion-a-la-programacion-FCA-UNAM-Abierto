#include <stdio.h>
int main()
{
    int numero;
    printf("Por favor, ingrese un numero entero: ");
    scanf("%i", &numero);
    if (numero % 2 == 0)
    {
        printf("El numero: %i es par", numero);
    }
    else
    {
        printf("el numero %i es impar", numero);
    }
    return 0;
}