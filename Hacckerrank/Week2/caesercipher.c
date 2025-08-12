#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, k;
    char s[1001]; 
    
    if (scanf("%d", &n) != 1) return 0;
    if (scanf("%s", s) != 1) return 0;
    if (scanf("%d", &k) != 1) return 0;
    
    k = k % 26;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (islower((unsigned char)c)) {
            s[i] = 'a' + (c - 'a' + k) % 26;
        } else if (isupper((unsigned char)c)) {
            s[i] = 'A' + (c - 'A' + k) % 26;
        } 
    }
    
    printf("%s\n", s);
    return 0;
}
