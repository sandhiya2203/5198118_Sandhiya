//plus minus code in c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0, an = 0, b = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0)
            count++;
        else if(a[i] > 0)
            an++;
        else
            b++;
    }

    double sum = (double)count / n;
    double p = (double)an / n;
    double z = (double)b / n;

    printf("%.6f\n", p);
    printf("%.6f\n", sum);
    printf("%.6f\n", z);

    return 0;
}
