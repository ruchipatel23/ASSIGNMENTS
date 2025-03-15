#include <iostream>

int main() {
    int n;

    // Asking user for the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];  // Array declaration
    int sum = 0;

    // Taking array input
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];  // Storing values in array
        sum += arr[i];       // Adding each element to sum
    }

    // Calculating average
    double average = static_cast<double>(sum) / n;

    // Displaying results
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Average = " << average << std::endl;

    return 0;
}

