#include <stdio.h>

long sumXor(long n) {
    if (n == 0) return 1; 
    int zero_bits = 0;
    while (n > 0) {
        if ((n & 1) == 0) zero_bits++;
        n >>= 1;
    }
    long result = 1L << zero_bits;
    return result;
}

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n", sumXor(n));
    return 0;
}
