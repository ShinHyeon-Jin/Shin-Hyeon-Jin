#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
    int n;
    printf("n을 입력 : ");
    scanf("%d", &n);

    switch (n/10)
    {
    case 0:
        printf("0이상 10미만");
        break;
    case 1:
        printf("10이상 20미만");
        break;
    case 2:
        printf("20이상 30미만");
        break;
    default:
        printf("30이상");
    }
    return 0;
}

