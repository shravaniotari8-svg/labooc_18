#include <iostream>
using namespace std;

int main()
{
    int a, b, add, sub, multi, modulo, num;
    float div;

    cout << "Calculator Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulo\n";

    cout << "Enter your choice: ";
    cin >> num;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(num)
    {
        case 1:
            add = a + b;
            cout << "Addition = " << add;
            break;

        case 2:
            sub = a - b;
            cout << "Subtraction = " << sub;
            break;

        case 3:
            multi = a * b;
            cout << "Multiplication = " << multi;
            break;

        case 4:
            if (b != 0)
            {
                div = (float)a / b;
                cout << "Division = " << div;
            }
            else
            {
                cout << "Division by zero is not possible.";
            }
            break;

        case 5:
            if (b != 0)
            {
                modulo = a % b;
                cout << "Modulo = " << modulo;
            }
            else
            {
                cout << "Modulo by zero is not possible.";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}