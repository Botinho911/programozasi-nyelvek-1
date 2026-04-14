#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void elemez(int t[], int n, int *min, int *max, double *atlag) {
    *min = t[0];
    *max = t[0];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (t[i] < *min) *min = t[i];
        if (t[i] > *max) *max = t[i];
        sum += t[i];
    }
    *atlag = (double)sum / n;
}

int main() {
    int tomb[10], legkisebb, legnagyobb;
    double atlag;
    srand(time(NULL));

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        tomb[i] = rand() % 90 + 10;
        printf("%d%s", tomb[i], (i < 9) ? ", " : "");
    }


    elemez(tomb, 10, &legkisebb, &legnagyobb, &atlag);

    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek atlaga: %.1f\n", 
            legkisebb, legnagyobb, atlag);

    return 0;
}