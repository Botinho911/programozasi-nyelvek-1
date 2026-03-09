#include <stdio.h>

void pozinator(int tomb[], int meret)
{
    for (int i = 0; i < meret; ++i)
    {
        if (tomb[i] < 0)
        {
            tomb[i] = tomb[i] * -1;
        }
        printf("%d", tomb[i]);
        if (i < meret - 1)  
        {
            printf(", ");
        }
    }
}

int main()
{
    int tomb[10] = {19, -49, 81, 9, 81, -6, 52, 68, -59, 15};
    int meret = 10;
    printf("A tömb eredeti állapota: ");
    for (int i = 0; i < meret; ++i)
    {
        printf("%d", tomb[i]);
        if (i < meret - 1)
        printf(", ");
         
    }
    printf("\n");

    printf("A tömb pozitívvá alakítása után: ");
    pozinator(tomb, meret);
    return 0;
}