#include <stdio.h>

#define MATRIX_ROW (3)
#define MATRIX_COL (3)

void mat2d_fill(int m[][MATRIX_COL], int row_count) {
    int col_count = MATRIX_COL;
    for (int row = 0; row < row_count; ++row) {
        for (int col = 0; col < col_count; ++col) {
            m[row][col] = row * col_count + col;
        }
    }
}

void mat2d_print(int m[][MATRIX_COL], int row_count) {
    // Calcula o tamanho da segunda dimensão (colunas)
    // Somente para exemplo pois já sabemos o tamanho em MATRIX_COL
    int col_count = sizeof(m[0]) / sizeof(m[0][0]);
    for (int row = 0; row < row_count; ++row) {
        for (int col = 0; col < col_count; ++col) {
            printf("%d ", m[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int m[MATRIX_ROW][MATRIX_COL];
    mat2d_fill(m, MATRIX_ROW);
    mat2d_print(m, MATRIX_ROW);
    return 0;
}
