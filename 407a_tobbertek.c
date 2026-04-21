#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int min;
	int max;
	double atl;
} Stat;

Stat szamol(const int t[], int n)
{
	Stat s;
	int sum = 0;

	s.min = t[0];
	s.max = t[0];

	for (int i = 0; i < n; i++) {
		if (t[i] < s.min) {
			s.min = t[i];
		}
		if (t[i] > s.max) {
			s.max = t[i];
		}
		sum += t[i];
	}

	s.atl = (double)sum / n;
	return s;
}

int main(void)
{
	const int n = 10;
	int v[n];

	srand(2021);

	for (int i = 0; i < n; i++) {
		v[i] = rand() % 90 + 10;
	}

	printf("A tomb elemei: ");
	for (int i = 0; i < n; i++) {
		printf("%d", v[i]);
		if (i < n - 1) {
			printf(", ");
		}
	}
	printf("\n");

	Stat m = szamol(v, n);

	printf("Legkisebb elem: %d\n", m.min);
	printf("Legnagyobb elem: %d\n", m.max);
	printf("Az elemek atlaga: %.1f\n", m.atl);

	return 0;
}
