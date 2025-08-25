#include <stdio.h>
#include <string.h>

#define ALPHABET 26

const char* isValid(char s[]) {
    int freq[ALPHABET] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        freq[s[i] - 'a']++;
    }

   
    int count[ALPHABET] = {0};
    int k = 0;
    for (int i = 0; i < ALPHABET; i++) {
        if (freq[i] > 0) {
            count[k++] = freq[i];
        }
    }

    int min = count[0], max = count[0];
    for (int i = 1; i < k; i++) {
        if (count[i] < min) min = count[i];
        if (count[i] > max) max = count[i];
    }

    if (min == max) return "YES";

    int minCount = 0, maxCount = 0;
    for (int i = 0; i < k; i++) {
        if (count[i] == min) minCount++;
        if (count[i] == max) maxCount++;
    }


    if (min == 1 && minCount == 1 && (maxCount + minCount) == k) return "YES";

    
    if ((max - min == 1) && maxCount == 1) return "YES";

    return "NO";
}

int main() {
    char s[100005];
    scanf("%s", s);
    printf("%s\n", isValid(s));
    return 0;
}
