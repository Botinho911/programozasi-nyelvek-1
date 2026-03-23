#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int db;

    printf("Hány db random számot szeretnél megadni?\n");
    scanf("%d", &db);

    int min;
    int max;
    printf("Kérem a minimum értéket: ");
    scanf("%d", &min);

    printf("Kérem a maximum értéket: ");
    scanf("%d", &max);

    srand(time(NULL));
    printf("A generált számok: ");
    for (int i = 0; i < db; ++i)
    {
        int random_szam = rand() % (max - min + 1) + min;
        printf("%d", random_szam);
        if (i < db - 1)
            printf(", ");
    }

    return 0;
}