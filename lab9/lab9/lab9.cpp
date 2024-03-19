#include <iostream>
#include <algorithm>

const int ROWS = 5;
const int COLS = 5;

int main() {
    setlocale(LC_ALL, "ukr");
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    std::cout << "Початкова матриця:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "Зворотня матриця:" << std::endl;
    for (int i = ROWS - 1; i >= 0; --i) {
        for (int j = COLS - 1; j >= 0; --j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int min_elements[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        int min_element = matrix[i][0];
        for (int j = 1; j < COLS; ++j) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
            }
        }
        min_elements[i] = min_element;
    }

    std::sort(min_elements, min_elements + ROWS, std::greater<int>());

    std::cout << "Вiдсортований масив мiнiмальних елементiв рядкiв у порядку спадання:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        std::cout << min_elements[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}