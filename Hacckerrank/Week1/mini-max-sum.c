#include <stdio.h>

int main() {
    long long int a[5];

    for (int i = 0; i < 5; i++) {
        scanf("%lld", &a[i]);
    }

    long long sum = 0, min = a[0], max = a[0];

    for (int i = 0; i < 5; i++) {
        sum += a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

   long long int min_sum = sum - max;
    long long int max_sum = sum - min;

    printf("%lld %lld\n", min_sum, max_sum);

    return 0;
}
