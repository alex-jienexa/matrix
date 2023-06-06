#include "Matrix.h"

#include <vector>
#include <string>

// По умолчанию
Matrix::Matrix() {
    _data = {};
    _lenght = 0;
    _height = 0;
}

// Копирование другой матрицей
Matrix::Matrix(const Matrix& other) {
    _data = other._data;
    _lenght = other._lenght;
    _height = other._height;
}    // Копирование другой матрицей
    
/* --- Задание элементов разными типами --- */

// Задание матрицы с помощью двумерного массива
Matrix::Matrix(const std::vector<std::vector<double>>& other) {
    _data = other;
    _height = other.size();
    if (_height > 0) _lenght = other[0].size();
}

// Задание матрицы с помощью двумерного массива
Matrix::Matrix(const std::vector<std::vector<int>>& other) {
    _height = other.size();
    if (_height > 0) _lenght = other[0].size();
    _data = {};
    _data.resize(_height);
    for (auto i = 0; i < _height; i++) {
        _data[i].resize(_lenght);
        for (auto j = 0; j < _lenght; j++) {
            _data[i][j] = (double)other[i][j];
        } 
    }
}

// Задание матрицы с помощью двумерного массива
Matrix::Matrix(const std::vector<std::vector<std::string>>& other) {
    _height = other.size();
    if (_height > 0) _lenght = other[0].size();
    _data = {};
    _data.resize(_height);
    for (auto i = 0; i < _height; i++) {
        _data[i].resize(_lenght);
        for (auto j = 0; j < _lenght; j++) {
            _data[i][j] = stod(other[i][j]);
        } 
    }
}