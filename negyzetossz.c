#include <stdio.h>

int main() {
    long long negyzetek_osszege = 0;
    long long osszeg = 0;
    long long osszeg_negyzete = 0;
    
    for (int i = 1; i <= 100; i++) {
        
        negyzetek_osszege += (i * i);
        
       
        osszeg += i;
    }
    
    
    osszeg_negyzete = osszeg * osszeg;
    
    long long kulonbseg = osszeg_negyzete - negyzetek_osszege;
    
    printf("Negyzetek osszege: %lld\n", negyzetek_osszege);
    printf("Osszeg negyzete: %lld\n", osszeg_negyzete);
    printf("Kulonbseg: %lld\n", kulonbseg);
    
    return 0;
}