#include <stdio.h>

int main (void)
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int i;

    printf("\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}
