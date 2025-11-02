#include <stdio.h>
void Array(const char *name, int arr[], int size) {
    printf("%s = {", name);
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n");
}

void swapArrays(int *a, int *b, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int lahore[] = {11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};
    int size = sizeof(lahore) / sizeof(lahore[0]);

    printf("Arrays BEFORE Swapping:\n");
    Array("lahore", lahore, size);
    Array("karachi", karachi, size);
    printf("\n");

    swapArrays(lahore, karachi, size);

    printf("Arrays AFTER Swapping:\n");
    Array("lahore", lahore, size);
    Array("karachi", karachi, size);
    printf("------------------------------\n");

    return 0;
}

