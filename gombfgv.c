#include <stdio.h>

double get_double()
{
    double r;
    
    scanf("%lf", &r);
    
    return r;
}

double get_felszin(double r)
{
    
    return 4* 3.14159 * r * r;

}

double get_terfogat(double r)
{
    
    return (4.0/3.0) * 3.14159 * r * r * r;

}

int main()
{
    printf("Adj meg egy sugarat:");
    double r = get_double();

    double felszin = get_felszin(r);
    double terfogat = get_terfogat(r);

    printf("A gomb felszine: %lf cm^2\n", felszin);
    printf("A gomb terfogata: %lf cm^3\n", terfogat);

    return 0;
}