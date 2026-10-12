#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "----- MENU -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin>> b;
    if (choice == 1)
    {
        cout << "Addition = " << a + b;
    }
    else if (choice == 2)
    {
        cout << "Subtraction = " << a - b;
    }
    else if (choice == 3)
    {
        cout << "Multiplication = " << a * b;
    }
    else if (choice == 4)
    {
        if (b != 0)
        {
            cout << "Division = " << a / b;
        }
        else
        {
            cout << "Nil";
        }
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}
