#include <stdio.h>
#include <math.h>

double get_terulet(double r)
{
    return 4 * M_PI * r * r;
}
double get_kerulet(double r)
{
    return 2 * M_PI * r;
}

int main()
{
    double r; 

    printf("Adj meg egy sugarat:");
    scanf("%lf", &r);

    double terulet = get_terulet(r);
    double kerulet = get_kerulet(r);

    printf("A kör kerülete: %lf\n", kerulet);
    printf("A kör területe: %lf\n", terulet);

    return 0;
}