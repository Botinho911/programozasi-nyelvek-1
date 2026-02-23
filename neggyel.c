#include <stdio.h>

int main()
{
    int a;
    printf("Adj meg egy egész számot:");
    scanf("%d", &a);

    for (int i=1; i <= a; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }
}