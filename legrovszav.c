#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Nem adtal meg egyetlen szot sem!\n");
        return 0;
    }

    int min_h = strlen(argv[1]);
    for (int i = 2; i < argc; i++) {
        int akt_h = strlen(argv[i]);
        if (akt_h < min_h) {
            min_h = akt_h;
        }
    }

    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == min_h) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}
