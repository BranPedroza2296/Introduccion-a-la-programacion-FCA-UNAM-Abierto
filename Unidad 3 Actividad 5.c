#include <stdio.h>
int main()
{
    int opcion;
    float saldo = 0, deposito, retiro;
    do
    {
printf("Bienvenido usuario, por favor, selecciona la opcion que
deseas\n");
printf("1) Depositar\n");
printf("2) Retirar\n");
printf("3) Consultar saldo\n");
printf("4) Salir\n");
scanf("%i",&opcion);
printf("\n");
switch(opcion){
        case 1:
            printf("Por favor, ingrese el monto deseado\n");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("\n");
            break;
        case 2:
            printf("Por favor, ingrese el monto a retirar:\n");
            scanf("%f", &retiro);
            if (retiro > saldo)
            {
                printf("Saldo insuficiente para retirar\n");
                printf("\n");
            }
            else
                saldo = saldo - retiro;
            break;
        case 3:
            printf("Su saldo actual es de: %f \n\n", saldo);
            break;
        case 4:
            printf("Hasta luego\n");
            break;
        default:
            printf("Opcion no valida, intente de nuevo\n");
            break;
}
    } while (opcion != 4);
    return 0;