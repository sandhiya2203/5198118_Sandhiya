#include <stdio.h>

int main() {
    char s[1000];
    int letters[26] = {0}; 
    int i;
    for (i = 0; i < 1000; i++) {
        char c = getchar();
        if (c == '\n' || c == EOF) {
            break;
        }
        s[i] = c;
    }
    int len = i;
    for (i = 0; i < len; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if (ch >= 'a' && ch <= 'z') {
            letters[ch - 'a'] = 1;
        }
    }
    int is_pangram = 1;
    for (i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            is_pangram = 0;
            break;
        }
    }

    if (is_pangram == 1) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }

    return 0;
}
