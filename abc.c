#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

void feltolt( char abc[])
{
    for (int i = 0; i < SIZE; ++i) 
    {
        abc[i] = 'a' + i;
    }

}

int main()
{
    char abc[SIZE];

    feltolt(abc);
    string s = abc;
    printf("%s\n", s);

    return 0;
}