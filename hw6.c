#include <stdio.h>

int main(void) 
{
	int arr[5];
	int i;

	printf("Please input five integers : ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("\nOdd Numbers : ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 1) printf("%d ", arr[i]);
	}
	
	printf("\nEven Numbers : ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) printf("%d ", arr[i]);
	}
	
	return 0;
}