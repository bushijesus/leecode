//
// Created by Administrator on 2023/7/9.
//

void rotate(int** matrix, int matrixSize, int* matrixColSize){
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < *matrixColSize; ++j) {
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            matrix[j][i] = matrix[i][j] ^ matrix[j][i];
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
        }
    }
}