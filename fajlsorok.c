#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 2;
    }

    int db = 0;
    char c;

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            db++;
        }
    }

    fclose(f);
    printf("%d\n", db);

    return 0;
}
