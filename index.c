#include <stdio.h>

int get_index(int tomb[], int meret, int keresett)
{
    for (int i = 0; i < meret; ++i)
    {
        if (tomb[i] == keresett)
        {
            return i; 
        }
    }
    return -1; 
}

int main()
{
    int tomb[10] = {19, 49, 81, 9, 81, 6, 52, 68, 49, 15};
    int meret = 10;
    int keresett;

    printf("Adja meg a keresett számot: ");
    scanf("%d", &keresett);

    int eredmeny = get_index(tomb, meret, keresett);

    if (eredmeny != -1)
    {
        printf("A keresett szám indexe: %d", eredmeny);
    }
    else
    {
        printf("A keresett szám nem található a tömbben.");
    }
    return 0;
}