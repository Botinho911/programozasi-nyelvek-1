#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("valos_szamok.txt", "r");
    if (f == NULL) return 1;

    double osszeg = 0.0;
    char vesszo[100];
    int i = 0;

    while (i < 100 && fscanf(f, "%s", vesszo) == 1) {
        for (int j = 0; vesszo[j]; j++) {
            if (vesszo[j] == ',') vesszo[j] = '.';
        }
        
        osszeg += atof(vesszo);
        i++;
    }

    fclose(f);
    printf("%.20f\n", osszeg);

    return 0;
}
