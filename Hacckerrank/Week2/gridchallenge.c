#include <stdio.h>
#include <string.h>

void sortRow(char row[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                char temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
            }
        }
    }
}

char* gridChallenge(char grid[][100], int n) {
    for (int i = 0; i < n; i++) {
        sortRow(grid[i], n);
    }

    for (int col = 0; col < n; col++) {
        for (int row = 0; row < n - 1; row++) {
            if (grid[row][col] > grid[row + 1][col]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char grid[100][100];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
        }

        printf("%s\n", gridChallenge(grid, n));
    }
    return 0;
}
