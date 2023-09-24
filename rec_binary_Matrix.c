#include "head.h"

int isBinaryMatrixRecursive(int matrix[100][100], int rows, int cols, int currentRow, int currentCol) {
    if (currentRow == rows) {
        return 1;
    }

    if (currentCol == cols) {
        return isBinaryMatrixRecursive(matrix, rows, cols, currentRow + 1, 0);
    }

    int currentElement = matrix[currentRow][currentCol];

    if (currentElement != 0 && currentElement != 1) {
        return 0;
    } else if (currentCol == cols - 1) {
        return isBinaryMatrixRecursive(matrix, rows, cols, currentRow + 1, 0);
    } else {
        return isBinaryMatrixRecursive(matrix, rows, cols, currentRow, currentCol + 1);
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];


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
