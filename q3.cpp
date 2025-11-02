#include <stdio.h>
#include <string.h>
int areAnagrams(const char *str1, const char *str2) {
    int count[256] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    const char *w1 = "pears";
    const char *w2 = "spare";

    printf("--- Anagram Detection Tool ---\n");
    printf("Test Case 1:\n");
    printf("Word 1: %s\n", w1);
    printf("Word 2: %s\n", w2);

    if (areAnagrams(w1, w2)) {
        printf("Result: The words are ANAGRAMS.\n");
    } else {
        printf("Result: The words are NOT anagrams.\n");
    }

    const char *W3 = "company";
    const char *W4 = "security";

    printf("\nTest Case 2:\n");
    printf("Word 1: %s\n", W3);
    printf("Word 2: %s\n", W4);

    if (areAnagrams(W3, W4)) {
        printf("Result: The words are ANAGRAMS.\n");
    } else {
        printf("Result: The words are NOT anagrams.\n");
    }

    printf("------------------------------\n");

    return 0;
}
