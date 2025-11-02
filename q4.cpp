#include <stdio.h>
int strLenP(const char *s) {
    const char *p = s;
    while (*p != '\0') {
        p++;
    }
    return p - s;
}

int main() {
    char c[100];
    int l;
    printf(" String Length Calculator (Pointer Method)\n");
    printf("Enter a word (no spaces): ");
    
    if (scanf("%99s", c) == 1) {
        l = strLenP(c);
        
        printf("\nThe length of \"%s\" is %d characters.\n", c, l);
    } else {
        printf("\nError reading input.\n");
    }

    return 0;
}

