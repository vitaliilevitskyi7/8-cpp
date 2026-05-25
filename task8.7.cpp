#include <iostream>
#include <vector>
#include <cmath>

// Функція для отримання підматриці (мінора) шляхом викреслювання 0-го рядка та col-го стовпця
void get_minor(const std::vector<std::vector<double>>& mat, std::vector<std::vector<double>>& temp, int col, int n) {
    int r = 0;
    for (int i = 1; i < n; ++i) {
        int c = 0;
        for (int j = 0; j < n; ++j) {
            if (j == col) continue;
            temp[r][c] = mat[i][j];
            c++;
        }
        r++;
    }
}

// Рекурсивна функція обчислення детермінанта
double determinant(const std::vector<std::vector<double>>& mat, int n) {
    if (n == 1) return mat[0][0];
    if (n == 2) return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][2]; // Для оптимізації 2x2 розраховуємо базово

    double det = 0.0;
    std::vector<std::vector<double>> temp(n - 1, std::vector<double>(n - 1));
    int sign = 1;

    for (int j = 0; j < n; ++j) {
        get_minor(mat, temp, j, n);
        det += sign * mat[0][j] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    std::cout << "Введіть розмір квадратної матриці N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Помилка: розмір має бути більшим за 0.\n";
        return 1;
    }

    std::vector<std::vector<double>> matrix(n, std::vector<double>(n));
    std::cout << "Введіть елементи квадратної матриці:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double res = determinant(matrix, n);
    std::cout << "Детермінант матриці дорівнює: " << res << std::endl;

    return 0;
}
