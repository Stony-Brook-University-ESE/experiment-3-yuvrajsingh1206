#include <stdio.h>

int main() {
    int matrix[700][700];
    int n = 700;
    int matrix2[300][300];
    int x = 1000;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i * n + j + 1);
            printf("%d ", matrix[i][j]);
        }
    }

    for (int i = 700; i < x; i++) {
        for (int j = 700; j < x; j++) {
            matrix2[i][j] = (i * x + j + 1);
            printf("%d ", matrix2[i][j]);
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
