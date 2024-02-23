#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Choose an operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  // Exit with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;  // Exit successfully
}
