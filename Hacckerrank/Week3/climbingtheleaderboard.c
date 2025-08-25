#include <stdio.h>

void climbingLeaderboard(int ranked[], int n, int player[], int m) {
    int unique[n];
    int uCount = 0;
    unique[uCount++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            unique[uCount++] = ranked[i];
        }
    }

    int i = uCount - 1;
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= unique[i]) {
            i--;
        }
        printf("%d\n", i + 2); 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    int m;
    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    climbingLeaderboard(ranked, n, player, m);
    return 0;
}
