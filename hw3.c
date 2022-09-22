#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
    int i, k=4, n, j=1;
    for (i = 1; i < 6; i++)
    {
        for (n = 1; n <= k; n++)
            printf(" ");
        for (n = 1; n <= j; n++)
            printf("*");
        for (n = 1; n <= k; n++)
            printf(" ");
        printf("\n");
        k--;
        j += 2;
    }
    return 0;
}

