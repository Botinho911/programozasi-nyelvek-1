#include   <stdio.h>

int contains(int tomb[], int meret, int keresett)
{
    for (int i = 0; i < meret; ++i)
    {
        if (tomb[i] == keresett)
        {
            return 1; 
        }
    }
    return 0; 
}

int main()
{
    int tomb[10] = {19, 49, 81, 9, 81, 6, 52, 68, 49, 15};
    int meret = 10;
    int keresett;
    printf("Adja meg a keresett számot: ");
    scanf("%d", &keresett);

    int eredmeny = contains(tomb, meret, keresett);
    printf("A tömb tartalmazza a keresett számot? %d", eredmeny);
    

    return 0;
}