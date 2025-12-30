#include <iostream>
#include <cmath>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return (double)a / b;
}

double power(int a, int b) {
    return pow(a, b);
}
int main() {
    int num1, num2;
    int choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Choose an operation:\n";
    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Division\n";
    cout << "5.Power\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Switch
    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2);
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2);
            break;
        case 4:
            if (num2 == 0)
                cout << "Error: Division by zero!";
            else
                cout << "Result: " << divide(num1, num2);
            break;
        case 5:
            cout << "Result: " << power(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
