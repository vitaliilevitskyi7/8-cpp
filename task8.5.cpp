#include <iostream>
#include <algorithm>

void transpose(double mat[25][25], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            std::swap(mat[i][j], mat[j][i]);
        }
    }
}

int main() {
    int n = 3;
    double matrix[25][25] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::cout << "Початкова матриця:\n";
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j) std::cout << matrix[i][j] << " ";
        std::cout << "\n";
    }

    transpose(matrix, n);

    std::cout << "Транспонована матриця:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
