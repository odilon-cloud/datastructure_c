#include "head.h"

int findMax(int matrix[100][100], int rows, int cols) {
    int maxElement = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    return maxElement;
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

    int maxElement = findMax(matrix, rows, cols);


    printf("Maximum element: %d\n", maxElement);

    return 0;
}
