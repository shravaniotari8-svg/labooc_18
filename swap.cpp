#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<endl;
    cout<<"First number: "<<a<<endl;    
    cout<<"Second number: "<<b<<endl;
    a=a+b;
    b=a-b;      
    a=a-b;
    cout<<"After swapping: "<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;
    return 0;
}