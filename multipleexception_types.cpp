#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Simple calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    try {
        // Check for invalid operator
        if (op != '+' && op != '-' && op != '*' && op != '/')
            throw string("Invalid operator! Please use +, -, *, or /.");

        // Check for negative numbers
        if (num1 < 0 || num2 < 0)
            throw -1.5;

        // Check for division by zero
        if (op == '/' && num2 == 0)
            throw 0;

        double result;
        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': result = static_cast<double>(num1) / num2; break;
        }

        cout << "Result: " << result << endl;
    }
    catch (int e) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
    catch (double e) {
        cout << "Error: Negative numbers are not allowed!" << endl;
    }
    catch (string e) {
        cout << "Error: " << e << endl;
    }

    cout << "Program execution completed successfully." << endl;
    return 0;
}
