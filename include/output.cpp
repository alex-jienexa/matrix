#include "Matrix.h"

// Вывод матрицы на экран
std::ostream& operator<<(std::ostream& out, const Matrix& mat) {
    for (int i = 0; i < mat._height; i++) {
        for (int j = 0; j < mat._lenght; j++) {
            out << mat._data[i][j] << " ";
        }
        out << std::endl;
    }
}