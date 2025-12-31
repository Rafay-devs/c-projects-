#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
  
        cout << "1.  Addition of two numbers\n";
        cout << "2.  Subtraction of two numbers\n";
        cout << "3.  Multiplication of two numbers\n";
        cout << "4.  Division of two numbers\n";
        cout << "5.  Addition of two  numbers\n";
        cout << "6.  Subtraction of two numbers\n";
        cout << "7.  Multiplication of two numbers\n";
        cout << "8.  Division of two numbers\n";
        cout << "9.  Sine \n";
        cout << "10. Cosine \n";
        cout << "11. Tangent \n";
        cout << "12. Square root\n";
        cout << "13. Square\n";
        cout << "14. Cube\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;
            }
            case 3: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;
            }
            case 4: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error: Division by zero not allowed." << endl;
                break;
            }
            case 5: {
                float x, y;
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result = " << x + y << endl;
                break;
            }
            case 6: {
                float x, y;
                cout << "Enter two  numbers: ";
                cin >> x >> y;
                cout << "Result = " << x - y << endl;
                break;
            }
            case 7: {
                float x, y;
                cout << "Enter two  numbers: ";
                cin >> x >> y;
                cout << "Result = " << x * y << endl;
                break;
            }
            case 8: {
                float x, y;
                cout << "Enter two floating point numbers: ";
                cin >> x >> y;
                if (y != 0)
                    cout << "Result = " << x / y << endl;
                else
                    cout << "Error: Division by zero not allowed." << endl;
                break;
            }
            case 9: {
                double angle;
                cout << "Enter angle in radians: ";
                cin >> angle;
                cout << "sin(" << angle << ") = " << sin(angle) << endl;
                break;
            }
            case 10: {
                double angle;
                cout << "Enter angle in radians: ";
                cin >> angle;
                cout << "cos(" << angle << ") = " << cos(angle) << endl;
                break;
            }
            case 11: {
                double angle;
                cout << "Enter angle in radians: ";
                cin >> angle;
                cout << "tan(" << angle << ") = " << tan(angle) << endl;
                break;
            }
            case 12: {
                double num;
                cout << "Enter number: ";
                cin >> num;
                if (num >= 0)
                    cout << "sqrt(" << num << ") = " << sqrt(num) << endl;
                else
                    cout << "Error: Square root of negative number not allowed." << endl;
                break;
            }
            case 13: {
                double num;
                cout << "Enter number: ";
                cin >> num;
                cout << "Square = " << num * num << endl;
                break;
            }
            case 14: {
                double num;
                cout << "Enter number: ";
                cin >> num;
                cout << "Cube = " << num * num * num << endl;
                break;
            }
            
               default:{
               	cout << "Invalid choice! Please select from the menu." << endl;
				break;
			   }
                
        }
         return 0;
    }

          

