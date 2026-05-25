#include <iostream>

int main() {
    double matrix[3][3] = {{1.0, 2.3, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    int i, j;
    double a;

    std::cout << "Введіть індекси i та j (від 0 до 2): ";
    std::cin >> i >> j;
    std::cout << "Введіть нове дійсне значення a: ";
    std::cin >> a;

    if (i >= 0 && i < 3 && j >= 0 && j < 3) {
        matrix[i][j] = a;
        
        std::cout << "Отримана матриця:\n";
        for (int r = 0; r < 3; ++r) {
            for (int c = 0; c < 3; ++c) {
                std::cout << matrix[r][c] << " ";
            }
            std::cout << "\n";
        }
    } else {
        std::cout << "Помилка: некоректні індекси матриці.\n";
    }
    return 0;
}
