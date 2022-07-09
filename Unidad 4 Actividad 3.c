#include <stdio.h>
void deuda();
float anio = 12, interes = 0.24, monto = 16000, total;
int main()
{
    deuda();
    return 0;
}
deuda()
{
    printf("La deuda actual es de %f\n", monto);
printf("Tomando los intereses de un anio y la tasa de interes de un
porcentaje de 24.\n");
monto = monto + (monto*interes);
total = monto/anio;
printf("La mensualidad es de %f\n", total);
}