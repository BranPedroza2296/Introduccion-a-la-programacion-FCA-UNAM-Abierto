#include <stdio.h>
int main()
{
    int anio;
    int anioActual = 2022;
    printf("Por favor, ingrese el anio de su nacimiento en numero: ");
    scanf("%i", &anio);
    int edad = anioActual - anio;
    if (edad < 0)
    {
        printf("Anio invalido, lo siento");
    }
    else
    {
        if (edad >= 18)
        {
            printf("Tienes %i anios, eres mayor de edad", edad);
        }
        else
        {
            printf("Tienes %i anios, aun no eres mayor de edad", edad);
        }
    }
    return 0;
}