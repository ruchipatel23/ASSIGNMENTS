#include <iostream>

int main() {
    int a = 10, b = 5;
    bool x = true, y = false;

    
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;
    std::cout << "a % b = " << (a % b) << std::endl;

    
    std::cout << "\nRelational Operators:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;

    
    std::cout << "\nLogical Operators:" << std::endl;
    std::cout << "x && y (AND): " << (x && y) << std::endl;
    std::cout << "x || y (OR): " << (x || y) << std::endl;
    std::cout << "!x (NOT): " << (!x) << std::endl;

    
    std::cout << "\nBitwise Operators:" << std::endl;
    std::cout << "a & b (AND): " << (a & b) << std::endl;
    std::cout << "a | b (OR): " << (a | b) << std::endl;
    std::cout << "a ^ b (XOR): " << (a ^ b) << std::endl;
    std::cout << "~a (NOT): " << (~a) << std::endl;
    std::cout << "a << 1 (Left Shift): " << (a << 1) << std::endl;
    std::cout << "a >> 1 (Right Shift): " << (a >> 1) << std::endl;

    return 0;
}

