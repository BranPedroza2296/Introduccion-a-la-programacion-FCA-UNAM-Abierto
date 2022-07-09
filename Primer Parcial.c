#include <stdio.h>
void suma();
void resta();
void multiplicacion();
void division();
void menu();
void repetirOpcion();
int deNuevo, opcion;
float sumando1, sumando2, minuendo, sustraendo, factor1, factor2, dividendo, divisor, resultado;

int main()
{
    menu();
    return (0);
}

suma()
{
    printf("Por favor, ingrese el primer numero:\n");
    scanf("%f", &sumando1);
    printf("Por favor, ingrese el segundo numero:\n");
    scanf("%f", &sumando2);
    resultado = sumando1 + sumando2;
    printf("La suma de %f + %f es: %f\n\n", sumando1, sumando2, resultado);
    printf("Si desea hacer otra suma, ingrese: 1\nSi desea ver el menu nuevamente, ingrese cualquier numero\n\n");
    scanf("%i", &deNuevo);
    if (deNuevo == 1)
    {
        suma();
    }
    else
    {
        menu();
    }
}

resta()
{
    printf("Por favor, ingrese el minuendo:\n");
    scanf("%f", &minuendo);
    printf("Por favor, ingrese el sustraendo:\n");
    scanf("%f", &sustraendo);
    resultado = minuendo - sustraendo;
    printf("La diferencia de %f - %f es: %f\n\n", minuendo, sustraendo, resultado);
    printf("Si desea hacer otra resta, ingrese: 1\nSi desea ver el menu nuevamente, ingrese cualquier numero\n\n");
    scanf("%i", &deNuevo);
    if (deNuevo == 1)
    {
        resta();
    }
    else
    {
        menu();
    }
}

multiplicacion()
{
    printf("Por favor, ingrese el primer factor:\n");
    scanf("%f", &factor1);
    printf("Por favor, ingrese el segundo factor:\n");
    scanf("%f", &factor2);
    resultado = factor1 * factor2;
    printf("El producto de %f * %f es: %f\n\n", factor1, factor2, resultado);
    printf("Si desea hacer otra multiplicacion, ingrese: 1\nSi desea ver el menu nuevamente, ingrese cualquier numero\n\n");
    scanf("%i", &deNuevo);
    if (deNuevo == 1)
    {
        multiplicacion();
    }
    else
    {
        menu();
    }
}

division()
{
    printf("Por favor, ingrese el divisor:\n");
    scanf("%f", &divisor);
    printf("Por favor, ingrese el dividendo:\n");
    scanf("%f", &dividendo);
    resultado = divisor / dividendo;
    printf("El cociente de %f / %f es: %f\n\n", divisor, dividendo, resultado);
    printf("Si desea hacer otra division, ingrese: 1\nSi desea ver el menu nuevamente, ingrese cualquier numero\n\n");
    scanf("%i", &deNuevo);
    if (deNuevo == 1)
    {
        division();
    }
    else
    {
        menu();
    }
}

menu()
{
    do
    {
        printf("Hola, bienvenido, por favor seleccione la opcion que desea: \n");
        printf("1) para realizr una suma\n");
        printf("2) para realizar una resta\n");
        printf("3) para realizar una multiplicacion\n");
        printf("4) para realizar una division\n");
        printf("5) para salir\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            suma();
            break;

        case 2:
            resta();
            break;

        case 3:
            multiplicacion();
            break;

        case 4:
            division();
            break;

        case 5:
            printf("Hasta luego!\n");
            exit(0);
            break;

        default:
            printf("Opcion no valida, por favor intenta de nuevo:\n\n");
            break;
        }
    } while (opcion);
}
