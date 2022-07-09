#include <stdio.h>
void suma();
float a, b, result;
int main()
{
    suma();
    return 0;
}
suma()
{
    printf("Por favor ingresa el primer numero\n");
    scanf("%f", &a);
    printf("Por favor ingresa el segundo numero\n");
    scanf("%f", &b);
    result = a + b;
    printf("El resultado de la suma es: %f\n", result);
}