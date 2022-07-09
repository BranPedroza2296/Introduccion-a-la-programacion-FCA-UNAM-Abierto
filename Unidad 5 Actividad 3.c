#include <stdio.h>
int main()
{
    int matriz1[2][2], matriz2[2][2], sum = 0;
    printf("Por favor, ingrese los numeros de la primer matriz\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%i", &matriz1[i][j]);
        }
    }
    printf("\n\n");
    printf("Por favor, ingrese los numeros de la segunda matriz\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%i", &matriz2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matriz1[i][j] == matriz2[i][j])
            {
                sum = sum + 1;
            }
        }
    }
    if (sum == 4)
    {
        printf("Las matrices son iguales\n");
    }
    else
        printf("Las matrices no son iguales\n");
    return 0;
}