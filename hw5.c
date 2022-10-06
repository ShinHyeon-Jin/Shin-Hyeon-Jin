#include <stdio.h>

int binarynum(int num)
{
	if (num > 1)
		binarynum(num / 2);
	printf("%d", num % 2);
}

int main(void)
{
	int num;
	printf("2진수로 변환할 양의 정수를 입력하시오. : ");
	scanf("%d", &num);
	binarynum(num);
	return 0;
}
