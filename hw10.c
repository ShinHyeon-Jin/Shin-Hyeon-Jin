#include <stdio.h>
#include <math.h>


struct city {
	char name[20];
	char country[20];
	int population;
};

int main(void) {
	struct city arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> ");
		scanf("%d", &arr[i].population);
	}

	for (i = 0; i < 3; i++) {
		printf("%s", arr[i].name);
		printf("%s", arr[i].country);
		printf("%d", arr[i].population);
	}
	return 0;
}