#include <stdio.h>
int main()
{
    float calif;
    printf("Por favor, ingrese la calificacion del 0 al 10: \n");
    scanf("%f", &calif);
    if (calif < 6)
    {
        printf("Equivale a NA\n");
    }
    else if (calif >= 6 && calif < 7)
    {
        printf("Equivale a S\n");
    }
    else if (calif >= 7 && calif < 9)
    {
        printf("Equivale a B\n");
    }
    else if (calif >= 9)
    {
        printf("Equivale a E\n");
    }
    return 0;