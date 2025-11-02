#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void convfunction(int n) {
    if (n == 0) {
        printf("Binary Code: 0\n");
        return;
    }
    int bNum[32], i = 0; 
    while (n > 0) {
        bNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary Code: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bNum[j]);
    }
    printf("\n");
}

int main() {
    int dCode;
    printf("  Decimal to Binary Access Code Converter \n");
    printf("==========================================\n");
    do {
        printf("Enter the decimal access code (must be non-negative): ");
        if (scanf("%d", &dCode) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
            continue; 
        }
        if (dCode < 0) {
            printf("Error: The access code cannot be negative. Please try again.\n");
        }

    } while (dCode < 0); 
    printf("\n--- Conversion Result ---\n");
    convfunction(dCode);

    return 0;
}
