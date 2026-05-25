#include <iostream>
#include <vector>

int main() {
    int m, n, k;
    std::cout << "Введіть розміри матриці M та N (через пробіл): ";
    std::cin >> m >> n;
    std::cout << "Введіть ціле число k: ";
    std::cin >> k;

    if (m <= 0 || n <= 0 || m >= 100 || n >= 100) {
        std::cout << "Помилка: некоректні розміри матриці.\n";
        return 1;
    }

    std::vector<std::vector<double>> A(m, std::vector<double>(n));
    std::cout << "Введіть елементи матриці за рядками:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    double sum = 0.0;
    bool found = false;

    // Пошук елементів, у яких i - j == k
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i - j == k) {
                sum += A[i][j];
                found = true;
            }
        }
    }

    if (found) {
        std::cout << "Сума елементів, де i - j = " << k << " дорівнює: " << sum << std::endl;
    } else {
        std::cout << "Таких елементів немає. Результат: 0" << std::endl;
    }

    return 0;
}
