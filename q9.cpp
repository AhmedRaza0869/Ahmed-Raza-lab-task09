#include <stdio.h>
#define MAX_NAME 50
#define MAX_ITEMS 100

float cit(int q, float p) {
    return (float)q * p;
}

void generateBill() {
    char name[MAX_NAME];
    int n, i, q;
    char i_name[MAX_NAME];
    float p, item_t, total_bill = 0.0;

    printf("Enter customer name: ");
    scanf(" %49[^\n]", name);

    printf("Enter number of items purchased (max %d): ", MAX_ITEMS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_ITEMS) {
        printf("Invalid number of items. Exiting.\n");
        return;
    }

    printf("\n--- Entering Item Details ---\n");

    for (i = 1; i <= n; i++) {
        printf("\nItem %d:\n", i);
        
        printf("  Enter item name: ");
        scanf(" %49[^\n]", i_name); 

        printf("  Enter quantity: ");
        if (scanf("%d", &q) != 1 || q <= 0) {
            printf("  Invalid quantity. Skipping item.\n");
            while (getchar() != '\n'); 
            continue;
        }

        printf("  Enter price per unit: ");
        if (scanf("%f", &p) != 1 || p < 0) {
            printf("  Invalid price. Skipping item.\n");
            while (getchar() != '\n');
            continue;
        }

        item_t = cit(q, p);
        total_bill += item_t;
    }

    printf(" GROCERY STORE BILL \n");
    printf("Customer: %s\n", name);
    printf("Total items purchased: %d\n", n);
    printf("TOTAL AMOUNT DUE: $%.2f\n", total_bill);
}

int main() {
    generateBill();
    return 0;
}
