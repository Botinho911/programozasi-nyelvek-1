#include <stdio.h>
#include <string.h>
#include "prog1.h"


int findchar(string s, char c) 
{
    for (int i = strlen(s) - 1; i >= 0; --i) 
    {
        if (s[i] == c)
        {
            return i; 
        }
    }
    return -1; 
}

int main() 
{
    int index = findchar("Abba", 'a');
    int index2 = findchar("Abba", 'x');
    int index3 = findchar("Abba", 'b');


    printf("a betű indexe: %d\n", index);
    printf("x betű indexe: %d\n", index2);
    printf("b betű indexe: %d\n", index3);

    return 0;
}