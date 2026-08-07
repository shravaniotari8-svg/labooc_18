#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employee_id;
    string designation;
    string branch;
    float basic_salary, gross_salary;

public:
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        getline(cin >> ws, employee_id);

        cout << "Enter Designation: ";
        getline(cin >> ws, designation);

        cout << "Enter Branch: ";
        getline(cin >> ws, branch);

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calculateGrossSalary()
    {
        gross_salary = basic_salary + (0.40 * basic_salary) + (0.20 * basic_salary);
    }

    void displayDetails() const
    {
        cout << "\n----- Employee Details -----\n";
        cout << "Employee ID : " << employee_id << endl;
        cout << "Designation : " << designation << endl;
        cout << "Branch      : " << branch << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Gross Salary: " << gross_salary << endl;
    }
};

int main()
{
    Employee e, e1, e2;

    e1.inputDetails();
    e1.calculateGrossSalary();

    e2.inputDetails();
    e2.calculateGrossSalary();

    e.inputDetails();
    e.calculateGrossSalary();

    e.displayDetails();
    e1.displayDetails();
    e2.displayDetails();

    return 0;
}