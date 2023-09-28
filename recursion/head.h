#ifndef HEAD_H
#define HEAD_H
#include<stdio.h>
int findMaxRecursive(int matrix[][100], int rows, int cols, int currentRow, int currentCol, int currentMax);
int isBinaryMatrixRecursive(int matrix[][100], int rows, int cols, int currentRow, int currentCol);

// Function prototypes for find_max.c
int findMax(int matrix[100][100], int rows, int cols);

// Function prototypes for binary_matrix.c
int isBinaryMatrix(int matrix[100][100], int rows, int cols);
#endif
