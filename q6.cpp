#include <stdio.h>
#define SIZE 10
void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE], int r1, int c1, int c2) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE];
    int r1, c1, r2, c2;
    int i, j;
    printf("Enter rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns for first matrix: ");
    scanf("%d", &c1);
    printf("Enter rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns for second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2) {// row 1 and column 2 does not match, it wont be possible to apply multipliaction thats why
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
        	printf("\nEnter matrix1 [%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
        	printf("\nEnter matrix2 [%d][%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    multiplyMatrices(a, b, result, r1, c1, c2);
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%5d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

