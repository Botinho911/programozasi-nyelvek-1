#include <stdio.h>

int main()
{
    int x = 'c' - 'a'; 
    int y = x - x;     
    int z = 'g' - 'a'; 

    printf("%d%d%d%d\n", x, y, x, z);
}