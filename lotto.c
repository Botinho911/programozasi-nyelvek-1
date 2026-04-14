#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main ()
{
    
    int n;

    printf("Hány db random számot szeretnél megadni?\n");
    scanf("%d", &n);

    int szamok[n];

    int  db= 0;
    int min;
    int max;

    printf("Kérem a minimum értéket: ");
    scanf("%d", &min);

    printf("Kérem a maximum értéket: ");
    scanf("%d", &max);

    srand(time(NULL));
    printf("A generált számok: ");

    while (db < n) 
    {
        int rszam = (rand() % (max - min + 1)) + min;
        
       
        int szerepel = 0; 
        
        for (int i = 0; i < db; ++i) {
            if (szamok[i] == rszam) {
                szerepel = 1; 
                break;
            }
        }

        if (szerepel == 0) {
            szamok[db] = rszam;
            ++db;
        }
    }

    printf("A generált számok: ");
    for (int i = 0; i < n; ++i) 
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");
    return 0;
}