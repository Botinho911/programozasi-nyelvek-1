#include  <stdio.h>
#include "prog1.h"
#include <string.h> 

int char_count(string s, char c) 
{
    int count = 0;
    for (int i = 0; i < strlen(s); ++i) 
    {
        if (s[i] == c) 
        {
            count++;
        }
    }
    return count;
}


int main()
{
    
    int count = char_count("Abba", 'b');
    int count2 = char_count("Abba", 'a');
    int count3 = char_count("Abba", 'x');

    printf("%d alkalommal fordul elő a sztringben.\n", count);
    printf("%d alkalommal fordul elő a sztringben.\n", count2);
    printf("%d alkalommal fordul elő a sztringben.\n", count3);


    return 0;
}