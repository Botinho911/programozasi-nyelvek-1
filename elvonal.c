#include <stdio.h>

void line(char c, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        
        printf("%c", c);
    }
    printf("\n");
}


int main() 
{
    printf("hello\n");
    line('-', 40);
    printf("world");


    return 0;
}