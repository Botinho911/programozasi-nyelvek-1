#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m;

    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &m);

    int tomb[m];

    for (int i = 0; i < m; ++i)
    {
        printf("Kérem a(z) %d. számot: ", i + 1);
        scanf("%d", &tomb[i]);
    }
    
    int tomb2[m];
    for (int i = 0; i < m; i++) 
    {
        tomb2[i] = abs(tomb[i]);
    }

    printf("A bevitt számok abszolútértékei: ");
    for (int i = 0; i < m; ++i)
    {
        printf("%d", tomb2[i]);
        if (i < m - 1)
        printf(", ");
    }
    printf("\n");

    printf("A megadott számok: ");
    for (int i = 0; i < m; ++i)
    {
        printf("%d", tomb[i]);
        if (i < m - 1)
        printf(", ");
    }
    printf("\n");

    return 0;
}