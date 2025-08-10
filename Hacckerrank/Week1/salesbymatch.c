#include <stdio.h>

int sockMerchant(int n, int ar[]) {
    int pairs = 0;
    int count[101] = {0};
    for (int i = 0; i < n; i++) {
        count[ar[i]]++;
        if (count[ar[i]] % 2 == 0) {
            pairs++;
        }
    }
    return pairs;
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("%d\n", sockMerchant(n, ar));
    return 0;
}
