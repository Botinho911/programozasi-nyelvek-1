#include  <stdio.h>
#include "prog1.h"
#include <string.h>

int containschar(string s, char c) 
{
    for (int i = 0; i < strlen(s); ++i) 
    {
        if (s[i] == c) 
        {
            return 1; 
        }
    }
    return 0; 
}

int main()
{
    int result1 = containschar("Abba", 'b');
    int result2 = containschar("Abba", 'x');
    int result3 = containschar("Abba", 'a');

    printf("A 'b' karakter szerepel a sztringben: %d\n", result1);
    printf("Az 'x' karakter szerepel a sztringben: %d\n", result2);
    printf("Az 'a' karakter szerepel a sztringben: %d\n", result3);

    return 0;
}