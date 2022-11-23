#include <stdio.h>

int convCase(int str)
{
	const int diff = 'a' - 'A';
	if (str >= 'A' && str <= 'Z')
		return str + diff;
	else if (str >= 'a' && str <= 'z')
		return str - diff;
	else
		return str;
}

int main(void)
{
	char str[50];
	int ch, len, i = 0;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("Ouput> ");
	for (i = 0; i < len; i++) {
		ch = convCase(str[i]);
		putchar(ch);
	}
	
	return 0;
}