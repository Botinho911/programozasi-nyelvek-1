#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    long long osszeg = 0;

    printf("Szam: ");

    
    while ((c = getchar()) != '\n' && c != EOF) {
        
        if (isdigit(c)) {
            
            osszeg += (c - '0');
        }
    }

    printf("A szamjegyek osszege: %lld\n", osszeg);

    return 0;
}