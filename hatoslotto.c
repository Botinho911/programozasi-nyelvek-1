#include <stdio.h>

void keres_nyero_szamok() {
    int n1, n2, n3, n4, n5, n6;
    long cel_szorzat = 996300;
    int cel_osszeg = 90;

    for (n1 = 1; n1 <= 40; n1++) {
        for (n2 = n1 + 1; n2 <= 41; n2++) {
            for (n3 = n2 + 1; n3 <= 42; n3++) {
                for (n4 = n3 + 1; n4 <= 43; n4++) {
                    for (n5 = n4 + 1; n5 <= 44; n5++) {
                        for (n6 = n5 + 1; n6 <= 45; n6++) {
                            
                            if (n1 + n2 + n3 + n4 + n5 + n6 == cel_osszeg) 
                            {
                                if ((long)n1 * n2 * n3 * n4 * n5 * n6 == cel_szorzat) {
                                    printf("A heti nyeroszamok: %d, %d, %d, %d, %d, %d\n", 
                                            n1, n2, n3, n4, n5, n6);
                                    return; 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main() {
    keres_nyero_szamok();
    return 0;
}