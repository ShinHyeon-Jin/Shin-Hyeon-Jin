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
	printf("2������ ��ȯ�� ���� ������ �Է��Ͻÿ�. : ");
	scanf("%d", &num);
	binarynum(num);
	return 0;
}
