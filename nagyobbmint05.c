#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *be = fopen("in.txt", "r");
    if (be == NULL) {
        return 1;
    }
    printf("in.txt sikeresen megnyitva\n");

    FILE *ki = fopen("out.txt", "w");
    if (ki == NULL) {
        fclose(be);
        return 1;
    }

    printf("0,5-nel nagyobb szamok szurese...\n");

    char p[100];
    double szam;
    int db = 0;

    while (fscanf(be, "%s", p) == 1) {
        for (int i = 0; p[i]; i++) {
            if (p[i] == ',') p[i] = '.';
        }

        szam = atof(p);

        if (szam > 0.5) {
            fprintf(ki, "%s\n", p); 
            db++;
        }
    }

    printf("szures vege\n");

    fclose(be);
    fclose(ki);
    printf("out.txt bezarva\n");

    printf("out.txt-be kiirt szamok mennyisege: %d db\n", db);

    return 0;
}
