#include <stdio.h>
void ingreso();
void incremento();
void decremento();
int numero = 10;
int main()
{
    int contador;
    do
    {
        printf("Numero actual: %i\n", numero);
        printf("Por favor, seleccione una opcion:\n");
        printf("1) Ingresar un numero\n");
        printf("2) Incrementa un numero\n");
        printf("3) Decrementa un numero\n");
        printf("4) Salir\n");
        printf("\n");
        scanf("%i", &contador);
        switch (contador)
        {
        case 1:
            ingreso();
            break;
        case 2:
            incremento();
            break;
        case 3:
            decremento();
            break;
        case 4:
            printf("Hasta luego\n");
            break;
        default:
            printf("Opcion no valida, intente de nuevo\n");
            break;
        }
    } while (contador != 4);
    return 0;
}
ingreso()
{
    printf("Ingrese el numero\n");
    scanf("%i", &numero);
    printf("\n");
    return numero;