#include <stdio.h>

void sortAsc(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortDesc(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void twoArrays(int k, int A[], int B[], int n) {
    int i;
    sortAsc(A, n);   
    sortDesc(B, n);  

    for (i = 0; i < n; i++) {
        if (A[i] + B[i] < k) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int q;
    scanf("%d", &q);  

    while (q--) {
        int n, k, i;
        scanf("%d %d", &n, &k);

        int A[1000], B[1000];  
        for (i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        for (i = 0; i < n; i++) {
            scanf("%d", &B[i]);
        }

        twoArrays(k, A, B, n);
    }

    return 0;
}
