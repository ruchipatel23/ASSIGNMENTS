#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Asking for user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Displaying a personalized greeting
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}

