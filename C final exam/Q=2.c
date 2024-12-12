#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += matrix[i][i];  // matrix[i][i] are the primary diagonal elements
    }

    printf("Sum of the primary diagonal elements: %d\n", sum);

    return 0;
}
