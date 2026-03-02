#include <stdio.h>

int main()
{
    int m;
    
    printf("Adja meg a gyémánt magasságát(pozitív páratlan szám): ");
    scanf("%d", &m);
    int kozep = m / 2 + 1;

    for (int i = 1; i <= kozep; ++i)
    {

        for (int j = 0; j < kozep - i; ++j)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); ++k)
        {
            printf("*");
        }
        printf("\n");


    } 

    for (int i = kozep - 1; i >= 0; --i)
    {
        for (int j = 0; j < kozep - i; ++j)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); ++k)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}