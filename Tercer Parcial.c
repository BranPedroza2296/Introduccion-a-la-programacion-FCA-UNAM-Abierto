#include <stdio.h>
#include <string.h>
int main()
{
    int abecedario[26];
    char frase[100];
    char letras = 'a';
    int conteo = 1;
    printf("CONTADOR DE LETRAS\n");
    printf("Por favor, ingrese su frase\n");
printf("Recuerde que debe ser de un maximo de 100 caracteres para que el
programa tenga un correcto funcionamiento\n");
gets(frase);
int limite= strlen(frase);
for(int i = 0;i<26;i++){
        abecedario[i] = 0;
}
for(int i = 0;i<26;i++){
        for (int j = 0; j < limite; j++)
        {
            if (letras == frase[j])
            {
                abecedario[i] = conteo++;
            }
        }
        conteo = 1;
        letras++;
}
letras='a';
printf("Las letras que mas se repiten son:\n");
for(int i = 0;i<26;i++){
        if (abecedario[i] >= 3 || abecedario[i] == 1)
        {
            printf("Letra %c: %i veces\n", letras, abecedario[i] - 1);
        }
        if (abecedario[i] == 2)
        {
            printf("Letra %c: %i vez\n", letras, abecedario[i] - 1);
        }
        letras++;
}
return 0;
}