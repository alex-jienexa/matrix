/* ? Основной файл класса Matrix */

#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<double>> data; // Данные матрицы
public:
    const int width; // ширина матрицы
    const int height; // высота матрицы

    /* Конструкторы */

    Matrix(int w, int h) : width(w), height(h) {
        data.resize(height);
        for (auto elem : data) {
            elem.resize(width);
        }
    }
};


int main() {

}