#include <stdio.h>
#include <string.h>
#include "prog1.h"


int match_ends(int n, string szavak[]) 
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        string s = szavak[i];
        if (strlen(s) >= 2 && s[0] == s[strlen(s) - 1]) 
        {
            ++count;
        }   
    }
    
    return count;
}

int main() 
{
    string szavak[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak_meret =5;
    int eredmeny = match_ends(szavak_meret, szavak);
    printf("A szavak száma, amelyek legalább 2 karakter hosszúak és az első és utolsó karakterük megegyezik: %d\n", eredmeny);
    return 0;
}