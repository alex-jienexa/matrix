#include <vector>
#include <string>

/* Объявление класса */

class Matrix {
private:
    std::vector<std::vector<double>> _data; // Данные матрицы  

    int _lenght;    // Длина матрицы, => len(data[n])

    int _height;    // Высота матрицы, => len(data)
public:
    Matrix();                       // По умолчанию

    Matrix(const Matrix& other);    // Копирование другой матрицей
    
    /* Задание элементов разными типами */
    
    Matrix(const std::vector<std::vector<double>>); 

    Matrix(const std::vector<std::vector<int>>);

    Matrix(const std::vector<std::vector<std::string>>); // Предполагается использование std::stod(...)
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