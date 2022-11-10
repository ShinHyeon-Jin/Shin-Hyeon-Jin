#include <stdio.h>
#include <math.h>

double StandardDev(double* arr)
{
	int i;
	double standard=0, sum=0;
	for (i = 0; i < 5; i++)
		standard += arr[i];
	for (i = 0; i < 5; i++)
		sum += (double)pow(arr[i] - standard / 5, 2);
	return (double)sqrt(sum / 5);
}

int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %lf", StandardDev(arr));
	return 0;

}