#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int total;
    printf("Por favor, escriba la frase que guste\n");
    scanf("%s", &frase);
    total = strlen(frase);
    printf("%i\n", total);
    return 0;
}