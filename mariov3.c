#include <stdio.h>


int main()
{
    int m;
    printf("Adja meg a fal magasságát: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; ++i) 
    {
        int szokoz = m-i;
        int teglak = i;

        for (int j = 0 ; j < szokoz; ++j) 
        {
            printf(" ");
        }
        for (int k = 0; k < teglak; ++k)
            {
                printf("#");
            }

        printf("  ");
        for (int j = 0; j < i; ++j) 
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}