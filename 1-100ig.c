#include <stdio.h>

int main() 
{
    int osszeg=1;

    for (int i = 1; i <=100; i++)
    {
        osszeg += i;
    
    }
    printf("Az 1-től 100-ig a számok összege: %d\n", osszeg);
    return 0;
}