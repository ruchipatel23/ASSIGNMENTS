#include <iostream>

int main() {
   
    int intNum = 10;
    double doubleNum = intNum;  
    std::cout << "Implicit Conversion:" << std::endl;
    std::cout << "int value: " << intNum << std::endl;
    std::cout << "Converted to double: " << doubleNum << std::endl;

    // **Explicit Type Conversion (Type Casting)**
    double pi = 3.14159;
    int intPi = (int)pi;  // Explicit conversion using C-style cast
    int intPiNew = static_cast<int>(pi); // Using static_cast

    std::cout << "\nExplicit Conversion:" << std::endl;
    std::cout << "Original double value: " << pi << std::endl;
    std::cout << "C-style Cast to int: " << intPi << std::endl;
    std::cout << "static_cast to int: " << intPiNew << std::endl;

    
    int a = 5, b = 2;
    double resultImplicit = a / b;  // Integer division, implicit conversion after assignment
    double resultExplicit = (double)a / b;  // Explicit conversion before division

    std::cout << "\nInteger Division with Type Conversion:" << std::endl;
    std::cout << "Implicit conversion result (int/int): " << 

