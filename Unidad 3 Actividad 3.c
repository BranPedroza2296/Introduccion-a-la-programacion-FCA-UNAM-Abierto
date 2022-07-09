#include <stdio.h>
int main()
{
    int contra, verContra, i = 3;
    printf("Por favor introduzca una contrasenia de 4 numeros\n");
    scanf("%i", &contra);
printf("Por favor, ingresa nuevamente tu contrasenia para verificacion:
\n");
scanf("%i",&verContra);
if(contra != verContra){
        while (i != 0)
        {
printf("La contrasenia es incorrecta, le quedan %i
intentos\n",i);
scanf("%i",&verContra);
i=i-1;
if(contra == verContra){
                printf("Usuario registrado exitosamente\n");
                i = 0;
}
        }
}else
printf("Usuario registrado exitosamente\n");
return 0;
}