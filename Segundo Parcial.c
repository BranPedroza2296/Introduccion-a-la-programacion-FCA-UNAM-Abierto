#include <stdio.h>
int a, b, c, d, ab, cd, abcd;
void operacion();
int main()
{
    printf("SUMA Y MULTIPLICACION DE NUMEROS\n");
    printf("Usted va a ingresar 4 numeros, de los cuales, los dos pimeros se sumaran al igual que los dos ultimos, el resultado de ambas sumas, se van a multiplicar entre si, dandonos el producto final mostrado en pantalla\n");
    printf("Por favor, ingrese los 4 numeros, recuerde que deben ser numeros enteros, de no ser el caso, el programa presenta fallas\n");
    operacion();
    return 0;
}
operacion()
{
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    ab = a + b;
    cd = c + d;
    printf("La suma del primer numero con el segundo numero es: %i\n", ab);
    printf("La suma del tercer numero con el cuarto numero es: %i\n", cd);
    final();
}

final()
{
    abcd = ab * cd;
    printf("El resultado de la multiplicacion de los numeros obtenidos anteriormente es: %i\n", abcd);
}
