#include <iostream>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m, n;
    
    std::cout << "Введіть число M (яке замінити): ";
    std::cin >> m;
    std::cout << "Введіть число N (на яке замінити): ";
    std::cin >> n;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] == m) {
                matrix[i][j] = n;
            }
        }
    }

    std::cout << "Отримана матриця:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
