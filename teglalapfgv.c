#include <stdio.h>

int get_ker(int a, int b)
{
    return 2* (a + b);
}

int get_ter(int a, int b)
{
    return a * b;
}

int main()
{
    int a;
    int b;
    

    printf("adja meg a téglalap egyek oldalát: ");
    scanf("%d", &a);
    printf("adja meg a téglalap másik oldalát: ");
    scanf("%d", &b);

    int ker = get_ker(a, b);
    int ter = get_ter(a, b);

    printf("a téglalap kerülete: %d\n", ker);
    printf("a téglalap területe: %d\n", ter);
    
    return 0;
}