#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N;
    long long res;

    printf("Enter a non-negative integer N: ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    res = factorial(N);
    printf("%d! = %lld\n", N, res);

    return 0;
}
