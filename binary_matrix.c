#include "head.h"

int isBinaryMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] != 1) {
                return 0;
            }
        }
    }
    return 1;
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

    if (isBinaryMatrix(matrix, rows, cols)) {
        printf("Yes, it's a binary matrix.\n");
    } else {
        printf("No, it's not a binary matrix.\n");
    }

    return 0;
}
