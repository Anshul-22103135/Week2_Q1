#include <stdio.h>
#define MAX_SIZE 100
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nOriginal matrix:\n");
    printMatrix(matrix, m, n);

    printf("\nTransposed matrix:\n");
    printMatrix(transpose, n, m);

    return 0;
}
