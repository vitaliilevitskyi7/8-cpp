#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cout << "Введіть розмір квадратної матриці N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Помилка: розмір матриці має бути більшим за 0.\n";
        return 1;
    }

    std::vector<std::vector<double>> matrix(n, std::vector<double>(n));
    std::cout << "Введіть елементи матриці за рядками:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Пошук мінімального додатного елемента
    double min_positive = -1.0;
    int target_row = -1;
    int target_col = -1;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] > 0) {
                if (!found || matrix[i][j] < min_positive) {
                    min_positive = matrix[i][j];
                    target_row = i;
                    target_col = j;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        std::cout << "У матриці немає додатних елементів. Обмін неможливий.\n";
        return 0;
    }

    std::cout << "Мінімальний додатний елемент: " << min_positive 
              << " знаходиться на перетині рядка " << target_row 
              << " та стовпця " << target_col << "\n\n";

    // Обмін місцями рядка target_row та стовпця target_col
    for (int i = 0; i < n; ++i) {
        std::swap(matrix[target_row][i], matrix[i][target_col]);
    }

    // Виведення отриманої матриці
    std::cout << "Матриця після обміну рядка та стовпця:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
