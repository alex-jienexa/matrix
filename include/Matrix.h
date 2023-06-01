#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <string>

/* Объявление класса */

class Matrix {
private:
    std::vector<std::vector<double>> _data; // Данные матрицы / Matrix data
    int _lenght;    // Длина матрицы, => len(data[n])
    int _height;    // Высота матрицы, => len(data)
public:
    // Конструкторы / Constructors
    Matrix();
    Matrix(const Matrix& other);
    Matrix(const std::vector<std::vector<double>>); 
    Matrix(const std::vector<std::vector<int>>);
    Matrix(const std::vector<std::vector<std::string>>); // Предполагается использование std::stod(...)

    // Операции сравнения / Compration operations
    Matrix operator==(const Matrix& other);
    Matrix operator!=(const Matrix& other);

    // Арифметические операции / Arithmetic Operations
    Matrix operator+(const Matrix&) const;
    Matrix operator-(const Matrix&) const;
    Matrix operator*(const Matrix&) const;
    Matrix operator/(const Matrix&) const;

    // Умножение/деление матрицы на число
    Matrix operator/(const int&) const;
    Matrix operator*(const int&) const;
    Matrix operator/(const double&) const;
    Matrix operator*(const double&) const;

    // Создание особых матриц / Creation of special matrix
        // Будут объявлены в ./constructors отдельным файлом
    Matrix identity() const; // Единичная матрица = элементы на главной диагонали единицы
    Matrix transposed(const Matrix&) const; // Транспонированная матрица = смена строк и столбцов местами
    Matrix square(const int&); // Квадратная матрица n*n

    // Особые операции с матрицами / Special operations with matrix
    Matrix inverse(const Matrix&) const; // Обратная матрица A^-1
    double det(const Matrix&) const; // Определитель матрицы
    double trace(const Matrix&) const; // След матрицы = суммирование элементов главной диагонали матрицы
    double minor(const Matrix&) const; // Минор матрицы

    /* 
    ПРИМЕЧАНИЯ: 
        - Все особые операции можно перенести в другой файл, отличный от заголовочного
   */
};

#endif