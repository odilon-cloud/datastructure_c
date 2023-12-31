#include "head.h"

int findMaxRecursive(int matrix[][100], int rows, int cols, int currentRow, int currentCol, int currentMax) {
    if (currentRow == rows) {
        return currentMax;
    }

    if (currentCol == cols) {
        return findMaxRecursive(matrix, rows, cols, currentRow + 1, 0, currentMax);
    }

    int currentElement = matrix[currentRow][currentCol];

    if (currentElement > currentMax) {
        return findMaxRecursive(matrix, rows, cols, currentRow, currentCol + 1, currentElement);
    } else {
        return findMaxRecursive(matrix, rows, cols, currentRow, currentCol + 1, currentMax);
    }
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

    int maxElement = findMaxRecursive(matrix, rows, cols, 0, 0, matrix[0][0]);

    printf("Maximum element: %d\n", maxElement);

    return 0;
}
