#include <iostream>


double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;

    
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    
    double area = calculateArea(length, width);

    
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}

