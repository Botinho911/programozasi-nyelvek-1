#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tomb_statisztika(const int tomb[], int n, int *min, int *max, double *atlag)
{
	int osszeg = 0;

	*min = tomb[0];
	*max = tomb[0];

	for (int i = 0; i < n; i++) {
		if (tomb[i] < *min) {
			*min = tomb[i];
		}
		if (tomb[i] > *max) {
			*max = tomb[i];
		}
		osszeg += tomb[i];
	}
	*atlag = (double)osszeg / n;
}

int main(void)
{
	const int n = 10;
	int tomb[n];

	int min;
	int max;
	double atlag;

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		tomb[i] = rand() % 90 + 10;
	}

	printf("A tomb elemei: ");
	for (int i = 0; i < n; i++) {
		printf("%d", tomb[i]);
		if (i < n - 1) {
			printf(", ");
		}
	}
	printf("\n");

	tomb_statisztika(tomb, n, &min, &max, &atlag);

	printf("Legkisebb elem: %d\n", min);
	printf("Legnagyobb elem: %d\n", max);
	printf("Az elemek atlaga: %.1f\n", atlag);

	return 0;
}
