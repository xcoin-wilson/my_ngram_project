#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR 256

void countCharacters(const char *text) {
    int charCount[MAX_CHAR] = {0};
    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        unsigned char c = (unsigned char)text[i]; // Cast to unsigned char

        charCount[c]++;
    }

    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCount[i] > 0) {
            printf("%c:%d\n", (char)i, charCount[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s text [text2, text3]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        countCharacters(argv[i]);
    }

    return 0;
}
