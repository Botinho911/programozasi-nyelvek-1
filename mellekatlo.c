#include <stdio.h>

void kiir_mellekatlo(int matrix[6][6], int meret) {
    printf("A mellekatlo elemei: ");
    for (int i = 0; i < meret; i++) {
        printf("%d ", matrix[i][meret - 1 - i]);
    }
    printf("\n");
}

int main() {
    int matrix[6][6] = {
        {44, 23, 26, 58, 65, 41},
        {89, 54, 41, 65, 21, 22},
        {84, 54, 58, 46, 54, 21},
        {54, 48, 74, 55, 12, 51},
        {54, 21, 65, 46, 1, 65},
        {67, 54, 81, 16, 84, 65}};


    kiir_mellekatlo(matrix, 6);

    return 0;
}