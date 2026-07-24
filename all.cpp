#include<iostream>
using namespace std;

int add();
int sub();
int multi();
float divide();

int main()
{
    int num;
    cout << "Calculator Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulo\n";

    cout << "Enter your choice: ";
    cin >> num;

    switch(num)
    {
        case 1:
        cout<<add()<<endl;
        break;

        case 2:
        cout<<sub()<<endl;
        break;

        case 3:
        cout<<multi()<<endl;
        break;

        case 4:
        cout<<divide()<<endl;
        break;

        default:
        cout<<"invalid choice";
    }

    return 0;
}