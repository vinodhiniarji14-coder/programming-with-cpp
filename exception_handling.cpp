#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0)
            throw denominator;  // Throw an exception if denominator is zero

        result = static_cast<double>(numerator) / denominator;
        cout << "Result = " << result << endl;
    }
    catch (int e) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    cout << "End program..." << endl;
    return 0;
}
