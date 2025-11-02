#include <stdio.h>
int hcf(int n1, int n2) {
    int temp;
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}


int lcm(int n1, int n2) {
    int result;
    int common_divisor = hcf(n1, n2);

    if (n1 == 0 || n2 == 0) {
        return 0; 
    }
    
    result = (n1 / common_divisor) * n2;
    return result;
}

int main() {
    int num1, num2, choice, result;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter two positive integers.\n");
        return 1;
    }

    printf("\n--- Calculation Menu ---\n");
    printf("1. Calculate HCF (Highest Common Factor)\n");
    printf("2. Calculate LCM (Least Common Multiple)\n");
    printf("Enter your choice (1 or 2): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Error: Invalid input for choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            result = hcf(num1, num2);
            printf("\nThe HCF of %d and %d is: %d\n", num1, num2, result);
            break;
        case 2:
            result = lcm(num1, num2);
            printf("\nThe LCM of %d and %d is: %d\n", num1, num2, result);
            break;
        default:
            printf("\nInvalid choice. Please enter 1 for HCF or 2 for LCM.\n");
            break;
    }

    return 0;
}
