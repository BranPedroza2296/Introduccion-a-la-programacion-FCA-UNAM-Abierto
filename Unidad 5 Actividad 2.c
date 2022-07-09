#include <stdio.h>
int main()
{
    int sum[7] = {1, 2, 5, 7, 8, 5, 1}, res = 0;
    for (int i = 2; i < 7; i = i + 2)
    {
        res = res + sum[i];
    }
    printf("%i\n", res);
    return 0;
}