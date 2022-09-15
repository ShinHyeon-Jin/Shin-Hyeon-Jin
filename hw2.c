#include <stdio.h>

int main(void)
{
	double KM, MILE;
	printf("Please enter kilometers:");
	scanf("%lf", &KM);
	MILE = KM / 1.609;
	printf("\n%lf km is equal to %lf miles\n", KM, MILE);
	return 0;
}