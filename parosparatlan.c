#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int is_odd(int n)
{
    if (n % 2 != 0)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    int a;

    printf("adjon meg egy egész számot: ");
    scanf("%d", &a);

    int paros = is_even(a);
    int paratlan = is_odd(a);

    printf("A szám páros: %d\n", paros);
    printf("A szám páratlan: %d\n", paratlan);

    return 0;
}