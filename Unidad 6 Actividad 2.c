#include <stdio.h>
int main()
{
    int a = 5;
    int *dir;
    dir = &a;
    printf("%i\n", dir);
    printf("%i, %i\n", a, *dir);
    printf("\n");
    *dir = *dir + 1;
    printf("%i\n", dir);
    printf("%i, %i\n", a, *dir);
    printf("\n");
    dir = dir + 1;
    printf("%i\n", dir);
    printf("%i, %i\n", a, *dir + 1);
    printf("\n");
    printf("%i\n", dir);
    printf("%i, %i\n", &a, dir + 1);
    printf("\n");
    return 0;
}