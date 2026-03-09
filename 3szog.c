#include <stdio.h>

int valid_triangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 0; 
    }

    if (a + b > c && a + c > b && b + c > a)
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
    int a, b, c;

    printf("Adja meg a háromszög egyik oldalának hosszát: ");
    scanf("%d", &a);
    printf("Adja meg a háromszög másik oldalának hosszát: ");
    scanf("%d", &b);
    printf("Adja meg a háromszög harmadik oldalának hosszát: ");
    scanf("%d", &c);

    int haromszog = valid_triangle(a, b, c);

    printf("%d", haromszog);

    return 0;

}