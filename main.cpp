#include "Matrix.h"
#include "MatrixConfigure.h"

#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    Matrix m1;

    std::vector<std::vector<double>> vctr_1 = {
        {1.0, 2.0, 3.0, 4.0},
        {2.0, 3.0, 4.0, 5.0},
        {3.0, 4.0, 5.0, 6.0},
    };

    std::vector<std::vector<int>> vctr_2 = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
    };

    Matrix m2(vctr_1);
    Matrix m3(vctr_2);
    Matrix m4(m3);

    std::cout << m1 << std::endl << m2 << std::endl << m3 << std::endl << m4 << std::endl;

    int a;
    std::cin >> a;
    return 0;
}