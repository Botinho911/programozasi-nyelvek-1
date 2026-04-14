#include <stdio.h>
#include <string.h>
#include <ctype.h>


int is_strong(char password[]) 
{
    int length = strlen(password);
    
    if (length < 8) 
    {
        return 0;
    }

    int lower = 0;
    int upper = 0;
    int digit = 0;

    for (int i = 0; i < length; i++) {
        if (islower(password[i])) lower = 1; 
        if (isupper(password[i])) upper = 1; 
        if (isdigit(password[i])) digit = 1; 
    }

    
    if (lower && upper && digit) 
    {
        return 1;
    } else 
    {
        return 0;
    }
}

int main() 
{
    char jelszo[100];

    printf("Adj meg jelszavakat '*' végjelig!\n\n");

    while (1) {
        printf("jelszó: ");
        scanf("%s", jelszo);

        
        if (strcmp(jelszo, "*") == 0) {
            break;
        }

        
        if (is_strong(jelszo)) {
            printf("erős jelszó\n\n");
        } else {
            printf("gyenge jelszó\n\n");
        }
    }

    return 0;
}