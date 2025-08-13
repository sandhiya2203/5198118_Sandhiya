#include <stdio.h>
#include <string.h>

long sum_of_digits_str(const char *n) {
    long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

long super_digit_long(long num) {
    if (num < 10) return num;
    long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return super_digit_long(sum);
}

int superDigit(const char *n, int k) {
    long initial_sum = sum_of_digits_str(n) * k;
    return super_digit_long(initial_sum);
}

int main() {
    char n[100001]; 
    int k;
    scanf("%s %d", n, &k);
    printf("%d\n", superDigit(n, k));
    return 0;
}
