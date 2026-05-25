#include <iostream>

void input_matrix_by_row(double mat[25][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        std::cout << "Введіть рядок " << i << " (" << n << " чисел через пробіл): ";
        for (int j = 0; j < n; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

int main() {
    int m, n;
    std::cout << "Введіть розміри матриці m та n (менші за 25): ";
    std::cin >> m >> n;

    if (m > 0 && m < 25 && n > 0 && n < 25) {
        double matrix[25][25];
        input_matrix_by_row(matrix, m, n);
        
        std::cout << "Матриця успішно завантажена.\n";
    }
    return 0;
}
