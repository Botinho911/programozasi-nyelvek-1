#include <stdio.h>

int rendez(int tomb[], int meret)
{
    for (int i = 0; i < meret - 1; ++i)
    {
        if (tomb[i] > tomb[i + 1])
        {
            return 0;
        }
    
    }
    return 1;
}

int main()
{
    int tomb[5]= {1, 2, 3, 4, 5};
    int meret = 5;
    
    int eredmeny = rendez(tomb, meret);
    printf("A tömb rendezett? %d", eredmeny);

    return 0 ;
}