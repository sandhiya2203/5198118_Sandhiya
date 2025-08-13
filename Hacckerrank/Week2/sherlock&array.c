#include <stdio.h>

const char* balancedSums(int arr[], int n) {
    long total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    long left_sum = 0;
    for (int i = 0; i < n; i++) {
        long right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum) {
            return "YES";
        }
        left_sum += arr[i];
    }
    return "NO";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[100000]; 
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%s\n", balancedSums(arr, n));
    }
    return 0;
}
