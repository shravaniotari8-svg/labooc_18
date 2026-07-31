#include <iostream>
using namespace std;

// Function Prototypes
int area(int);
int area(int, int);
float area(float);

int main()
{
    int side, length, breadth;
    float radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Area of Square = " << area(side) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Area of Rectangle = " << area(length, breadth) << endl;

    cout << "\nEnter radius of circle: ";
    cin >> radius;

    cout << "Area of Circle = " << area(radius) << endl;

    return 0;
}

// Area of square
int area(int side)
{
    return side * side;
}

// Area of rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

// Area of circle
float area(float radius)
{
    return 3.14 * radius * radius;
}