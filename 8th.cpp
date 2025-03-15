#include <iostream>

int main() {
    int marks;

    
    std::cout << "Enter student's marks (0-100): ";
    std::cin >> marks;

    
    if (marks >= 90 && marks <= 100) {
        std::cout << "Grade: A+" << std::endl;
    } else if (marks >= 80) {
        std::cout << "Grade: A" << std::endl;
    } else if (marks >= 70) {
        std::cout << "Grade: B" << std::endl;
    } else if (marks >= 60) {
        std::cout << "Grade: C" << std::endl;
    } else if (marks >= 50) {
        std::cout << "Grade: D" << std::endl;
    } else if (marks >= 0) {
        std::cout << "Grade: F (Fail)" << std::endl;
    } else {
        std::cout << "Invalid input! Marks should be between 0 and 100." << std::endl;
    }

    return 0;
}

