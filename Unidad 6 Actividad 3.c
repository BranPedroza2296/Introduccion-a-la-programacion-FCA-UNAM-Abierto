#include <stdio.h>
int main()
{
    int a = 145, b;
    int *p1, *p2;
    p1 = &a;
    b = *p1;
    printf("%i, %i, %i", a, *p1, b);
    return 0;
}