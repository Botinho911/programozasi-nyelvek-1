#include <stdio.h>

int main() 
{
    int poz=0;
    int neg=0;
    int osszeg = 0;
    int a;
    
    do
    {
        printf("Adj meg egy egész számot (vége: 0):");
        scanf("%d", &a);
        if (a > 0)
        poz++;
        if (a < 0)
        neg++;
           
    } while (a != 0);
    
    printf("A pozitív elemek száma: %d\n", poz);
    printf("A negatív elemek száma: %d\n", neg);
    
    return 0;
}