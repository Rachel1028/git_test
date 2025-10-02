#include <stdio.h>

int main() {
    int rows[10];
    int cols[10];
    int matrix[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    print("최대값: %d, 행번호: %d, 열번호: %d", max, maxRow, maxCol);

    return 0;
}
