#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
    int n;
    printf("n�� �Է� : ");
    scanf("%d", &n);

    switch (n/10)
    {
    case 0:
        printf("0�̻� 10�̸�");
        break;
    case 1:
        printf("10�̻� 20�̸�");
        break;
    case 2:
        printf("20�̻� 30�̸�");
        break;
    default:
        printf("30�̻�");
    }
    return 0;
}
