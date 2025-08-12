#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int maxMin(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), cmpfunc); 

    int min_unfairness = arr[k - 1] - arr[0];
    for (int i = 1; i <= n - k; i++) {
        int unfairness = arr[i + k - 1] - arr[i];
        if (unfairness < min_unfairness) {
            min_unfairness = unfairness;
        }
    }
    return min_unfairness;
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maxMin(arr, n, k));

    free(arr);
    return 0;
}
