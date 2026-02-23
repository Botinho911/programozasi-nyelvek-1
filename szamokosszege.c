#include <stdio.h>

int main() 
{
    int a;
    int osszeg = 0;
    
    do
    {
        printf("Adj meg egy egész számot (vége: 0):");
        scanf("%d", &a);
        osszeg += a;
           
    } while (a != 0);
    
    printf("A beolvasott számok összege: %d\n", osszeg);
    
    return 0;
}