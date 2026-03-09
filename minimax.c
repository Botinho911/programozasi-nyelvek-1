#include <stdio.h>

int get_max(int tomb[], int meret)
{
    int max = tomb[0];
    for (int i = 1; i < meret; ++i)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }
    return max;
}

int get_min(int tomb[], int meret)
{
    int min = tomb[0];
    for (int i = 1; i < meret; ++i)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    return min;
}

int main()
{
    int tomb[10] = {19, 49, 81, 9, 81, 6, 52, 68, 49, 15};
    int meret = 10;

    int max = get_max(tomb, meret);
    int min = get_min(tomb, meret);
    
    printf("A tömb maximuma: %d\n", max);
    printf("A tömb minimuma: %d\n", min);

    return 0;
}