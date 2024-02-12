/**
 * @file thirdcode.cpp
 * @brief A simple C++ program to calculate the factorial of a non-negative integer using a class.
 */

#include <iostream>

/**
 * @brief Class to calculate the factorial of a number using recursion.
 */
class FactorialCalculator {
public:
    /**
     * @brief Calculates the factorial of a number using recursion.
     * @param n The non-negative integer for which to calculate the factorial.
     * @return The factorial of the input number.
     */
    int calculate(int n);
};

// Implementation of the FactorialCalculator class method
int FactorialCalculator::calculate(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * calculate(n - 1);
    }
}

/**
 * @brief Main function to take user input and display the factorial using the FactorialCalculator class.
 * @return 0 on successful execution.
 */
int main() {
    // Variable to store the user input
    int number;

    // Get user input
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the input is non-negative
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        // Create an instance of FactorialCalculator
        FactorialCalculator calculator;

        // Call the calculate method and display the result
        int result = calculator.calculate(number);
        std::cout << "Factorial of " << number << " is: " << result << std::endl;
    }

    return 0;
}
