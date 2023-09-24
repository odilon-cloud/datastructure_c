#include <stdio.h>

int isBinaryMatrixRecursive(int matrix[100][100], int rows, int cols, int currentRow, int currentCol) {
    if (currentRow == rows) {
        return 1; // Base case: all elements have been checked and are binary
    }

    if (currentCol == cols) {
        return isBinaryMatrixRecursive(matrix, rows, cols, currentRow + 1, 0);
    }

    if (matrix[currentRow][currentCol] != 0 && matrix[currentRow][currentCol] != 1) {
        return 0; // Not a binary matrix
    }

    return isBinaryMatrixRecursive(matrix, rows, cols, currentRow, currentCol + 1);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isBinaryMatrixRecursive(matrix, rows, cols, 0, 0)) {
        printf("Yes, it's a binary matrix.\n");
    } else {
        printf("No, it's not a binary matrix.\n");
    }

    return 0;
}
