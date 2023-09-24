#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxElement = matrix[0][0];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }


    printf("Maximum element: %d\n", maxElement);

 char response;

    printf("Do you want to exit (Y/N): ");
    scanf(" %c", &response);

    if (response == 'Y' || response == 'y') {
        return 0;
    } else {
        return main();
    }
    return 0;
}
