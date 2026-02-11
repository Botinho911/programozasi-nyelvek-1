#include <stdio.h>

int main() 
{
    int a;

    printf("Adja meg a kör sugarát: ");
    scanf("%d", &a);

    printf("A kör kerülete: %.2f\n", 2 * 3.14 * a);
    printf("A kör területe: %.2f\n", 3.14 * a * a);

    return 0;
}