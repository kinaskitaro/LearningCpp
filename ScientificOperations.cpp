#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    cout << "\n\t-----------------------------------\n";
    cout << "\t             CALCULATOR            \n";
    cout << "\t-----------------------------------\n";
    cout << "\t1. Addition\t\t" << "8:  sin" << endl;
    cout << "\t2. Subtraction\t\t" << "9:  cos" << endl;
    cout << "\t3. Multiplication\t" << "10: tan" << endl;
    cout << "\t4. Division\t\t" << "11: Inverse of Sin" << endl;
    cout << "\t5. Exponent\t\t" << "12: Inverse of Cos" << endl;
    cout << "\t6. Square\t\t" << "13: Inverse of Tan" << endl;
    cout << "\t7. Log\t\t\t" << "14: Exist" << endl;

    float x, y;
    float PI = 3.14159265;
    int choice;

    do
    {
        cout << "\n Enter the function you want to perform: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter first number: ";
            cin >> x;
            cout << "\n Enter second number: ";
            cin >> y;
            cout << "\n The addition of two numbers is: " << x + y << endl;
            break;
        case 2:
            cout << "\n Enter first number: ";
            cin >> x;
            cout << "\n Enter second number: ";
            cin >> y;
            cout << "\n The subtraction of two numbers is: " << x - y << endl;
            break;
        case 3:
            cout << "\n Enter first number: ";
            cin >> x;
            cout << "\n Enter second number: ";
            cin >> y;
            cout << "\n The multiplication of two numbers is: " << x * y << endl;
            break;
        case 4:
            cout << "\n Enter first number: ";
            cin >> x;
            cout << "\n Enter second number: ";
            cin >> y;
            if (y == 0)
            {
                cout << "\n Division by zero is not allowed";
                break;
            }
            else
                cout << "\n The division of two numbers is: " << x / y << endl;
            break;
        case 5:
            cout << "\n Enter the numbe: r";
            cin >> x;
            cout << "\n Enter the exponent: ";
            cin >> y;
            cout << "\n The result is: " << pow(x, y) << endl;
            break;
        case 6:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The square of the number is: " << sqrt(x) << endl;
            break;
        case 7:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The log of the number is: " << log10(x) << endl;
            break;
        case 8:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The sin of the number is: " << sin(x) << endl;
            break;
        case 9:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The cos of the number is: " << cos(x) << endl;
            break;
        case 10:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The tan of the number is: " << tan(x) << endl;
            break;
        case 11:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The Inverse of Sin of the number is: " << asin(x) * 180.0 / PI << endl;
            break;
        case 12:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The Inverse of Cos of the number is: " << acos(x) * 180.0 / PI << endl;
            break;
        case 13:
            cout << "\n Enter the number: ";
            cin >> x;
            cout << "\n The Inverse of Tan of the number is: " << atan(x) * 180.0 / PI << endl;
            break;
        case 14:
            cout << "\n\t-----------------------------------\n";
            cout << "\t             THANK YOU             \n";
            cout << "\t-----------------------------------\n";
            break;
        default:
            cout << "\n\t-----------------------------------\n";
            cout << "\t             INVALID INPUT         \n";
            cout << "\t-----------------------------------\n";
            break;
        }
    } while (choice != 14);
    return 0;
}