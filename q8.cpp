#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50,70,80,90,110};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;
    int i;

    printf("Array elements printed using pointer arithmetic:\n");
    
    for (i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *p);
        p++;
    }

    return 0;
}

