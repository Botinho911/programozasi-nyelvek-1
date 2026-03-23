#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "prog1.h"


int main (int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        exit(1);
    }
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    printf("Az osszeguk: %d \n", n1 + n2);

    return 0;
}