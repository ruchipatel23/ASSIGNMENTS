#include <iostream>

int main() {
    int num;

    
    std::cout << "Enter a number to display its multiplication table: ";
    std::cin >> num;

    
    std::cout << "\nMultiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
    }

   
}

