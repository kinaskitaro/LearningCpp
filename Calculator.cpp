#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // define variables
    string operation;
    double num1, num2;

    // get user input
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter Second Number: ";
    cin >> num2;

    // If else statement to check the operation
    if (operation == "+")
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operation == "-")
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operation == "*")
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (operation == "/")
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else
    {
        cout << "Invalid Operation" << endl;
    }

    return 0;
}