#include <iostream>

void input_matrix_by_element(double mat[20][20], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "Введіть елемент [" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
        }
    }
}

int main() {
    int m, n;
    std::cout << "Введіть розміри матриці m та n (менші за 20): ";
    std::cin >> m >> n;

    if (m > 0 && m < 20 && n > 0 && n < 20) {
        double matrix[20][20];
        input_matrix_by_element(matrix, m, n);
        
        std::cout << "Введена матриця:\n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}
