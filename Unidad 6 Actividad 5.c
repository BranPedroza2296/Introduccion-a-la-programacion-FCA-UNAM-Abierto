#include <stdio.h>
int main()
{
    int arr[5];
    printf("Por favor, ingrese los 5 numeros que guste\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("El numero %i, tiene la direccion de memoria: %i\n", arr[i],
               &arr[i]);
    }
    return 0;
}