#include <stdio.h>

int main()
{
    int tomb[10] = {19, 49, 81, 9, 81, 6, 52, 68, 49, 15}; 
    int meret = 10;
    for (int i = 0; i < meret; ++i)
    {
        printf("%d", tomb[i]);
        if (i < meret - 1)
        printf(", ");
         
    }
    printf("\n");

    return 0;
}