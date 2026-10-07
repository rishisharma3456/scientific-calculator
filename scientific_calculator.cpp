#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b, result;

    cout << "===== SCIENTIFIC CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Sine" << endl;
    cout << "8. Cosine" << endl;
    cout << "9. Tangent" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Error: Cannot divide by zero!";
            break;

        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b);
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> a;

            if (a >= 0)
                cout << "Result = " << sqrt(a);
            else
                cout << "Error: Square root of negative number!";
            break;

        case 7:
            cout << "Enter angle in degrees: ";
            cin >> a;
            result = sin(a * 3.14159 / 180);
            cout << "Result = " << result;
            break;

        case 8:
            cout << "Enter angle in degrees: ";
            cin >> a;
            result = cos(a * 3.14159 / 180);
            cout << "Result = " << result;
            break;

        case 9:
            cout << "Enter angle in degrees: ";
            cin >> a;
            result = tan(a * 3.14159 / 180);
            cout << "Result = " << result;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
