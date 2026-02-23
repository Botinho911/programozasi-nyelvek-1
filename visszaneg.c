#include <stdio.h>

int main()
{
    int a;
    printf("Adj meg egy egész számot:");
    scanf("%d", &a);

    for (int i=a; i !=0 ; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
}