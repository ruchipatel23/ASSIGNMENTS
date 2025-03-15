#include <iostream>

int main() {
    
    int num1 = 10, num2 = 5;   
    char letter = 'A';        
    bool isTrue = true;       
    std::string name = "John"; 

    
    
    const int FIXED_VALUE = 100;

    
    
    int sum = num1 + num2;
    float area = pi * num1 * num1; 
    bool comparison = (num1 > num2); 

    
    std::cout << "Integer sum: " << sum << std::endl;
    std::cout << "Area of circle with radius " << num1 << ": " << area << std::endl;
    std::cout << "Large number (double): " << largeNumber << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "Boolean value (isTrue): " << isTrue << std::endl;
    std::cout << "Comparison (num1 > num2): " << comparison << std::endl;
    std::cout << "Constant FIXED_VALUE: " << FIXED_VALUE << std::endl;
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}

