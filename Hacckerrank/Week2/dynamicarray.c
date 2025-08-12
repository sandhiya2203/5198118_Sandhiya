#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int **seqList = malloc(n * sizeof(int*));
    int *seqSizes = calloc(n, sizeof(int)); 
    for (int i = 0; i < n; i++) {
        seqList[i] = NULL;
    }

    int lastAnswer = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[idx] = realloc(seqList[idx], (seqSizes[idx] + 1) * sizeof(int));
            seqList[idx][seqSizes[idx]] = y;
            seqSizes[idx]++;
        } else if (type == 2) {
            int pos = y % seqSizes[idx];
            lastAnswer = seqList[idx][pos];
            printf("%d\n", lastAnswer);
        }
    }
    for (int i = 0; i < n; i++) {
        free(seqList[i]);
    }
    free(seqList);
    free(seqSizes);

    return 0;
}
