#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 1000
#define MAX_LENGTH 100

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char queries[MAX_STRINGS][MAX_LENGTH];
    int result[MAX_STRINGS] = {0};

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    int q;
    scanf("%d", &q); 
    for (int i = 0; i < q; i++) {
        scanf("%s", queries[i]);
    }

    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }
        result[i] = count;
    }
    for (int i = 0; i < q; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
