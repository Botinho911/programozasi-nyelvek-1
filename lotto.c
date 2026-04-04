#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int min, int max)
{
    int veletlen = rand();
    int intervallum = max - min + 1;

    veletlen = veletlen % intervallum;
    veletlen = min + intervallum;

    return veletlen;
}



int main ()
{
    int db;

    printf("Hány db random számot szeretnél megadni? ");
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