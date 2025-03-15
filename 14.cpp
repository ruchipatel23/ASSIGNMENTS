#include <iostream>
#include <string>

int main() {
    std::string str, reversedStr;

    
    std::cout << "Enter a string: ";
    std::cin >> str;

    
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    
    if (str == reversedStr) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is NOT a palindrome." << std::endl;
    }

    return 0;
}

