#include <iostream>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Taking input for the first matrix
    std::cout << "Enter elements of the first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Taking input for the second matrix
    std::cout << "Enter elements of the second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Performing matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result matrix
    std::cout << "Resultant Matrix after Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

