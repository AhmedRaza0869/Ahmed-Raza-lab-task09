#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define BRIGHT_INC 20
#define MAX_VAL 255

void Img(int M[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            M[i][j] = rand() % (MAX_VAL + 1);
        }
    }
}

void bright(int o[N][N], int b[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            b[i][j] = o[i][j] + BRIGHT_INC;
            if (b[i][j] > MAX_VAL) {
                b[i][j] = MAX_VAL;
            }
        }
    }
}

void disp(const char *t, int m[N][N]) {
    int i, j;
    printf("\n%s (8x8):\n", t);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int o[N][N];
    int b[N][N];

    srand(time(NULL));

    printf("======================================\n");
    printf(" 8x8 Image Matrix Processor\n");
    printf("======================================\n");

    Img(o);
    bright(o, b);

    disp("1. Original Image", o);
    disp("2. Brightened Image by +20", b);

    printf("\n--- Processing Complete ---\n");

    return 0;
}

