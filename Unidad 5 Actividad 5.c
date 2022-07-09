#include <stdio.h>
int
    num[20] = {47, 14, 47, 58, 47, 10, 59, 123, 465, 752, 2, 452, 12, 45, 189, 784, 1564, 1234, 486,
               5};
int main()
{
    // printf("Por favor, ingrese los numeros desados, recuerde que deben de
    ser 20\n ");
        /*for(int i=0;i<20;i++){
        scanf("%i",&num[i]);
        }*/
        for (int a = 0; a < 19; a++)
    {
        for (int b = 0; b < 19; b++)
        {
            if (num[b] > num[b + 1])
            {
                int aux;
                aux = num[b];
                num[b] = num[b + 1];
                num[b + 1] = aux;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", num[i]);
    }
    return 0;
}