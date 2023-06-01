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

    // TODO: Операторы сравнения / Comprasion operations

    // Создание особых матриц / Creation of special matrix
    Matrix identity() const; // Единичная матрица = элементы на главной диагонали единицы
    Matrix transposed(const Matrix&) const; // Транспонированная матрица = смена строк и столбцов местами

    // Особые операции с матрицами / Special operations with matrix
    /* TODO:
        - Обратная матрица = 1/a
        - След матрицы = M
        - Детерминант матрицы = det(A) = |A|
        - ...
    */
};

/* 
Примерный план распределения работы:
Matrix
|-headers
    |-private           // Приватные переменные
    |-initialization    // Конструкторы и деструкторы
    |-equality          // Перегрзуки операторов сравнения 
    |-mathematics       // Действия арифметики матриц
    |(may be)-practical // (Возможно) практическое применение матриц (решение уравнений?)
*/