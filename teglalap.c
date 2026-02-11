#include <stdio.h>

int main() 
{
    int a;
    int b;

    printf("Adja meg a téglalap egyik oldalának hosszát: ");
    scanf("%d", &a);

    printf("Adja meg a téglalap másik oldalának hosszát: ");
    scanf("%d", &b);
    
    printf("A téglalap kerülete: %d\n", 2 * (a + b));
    printf("A téglalap területe: %d\n", a * b);

    return 0;
}