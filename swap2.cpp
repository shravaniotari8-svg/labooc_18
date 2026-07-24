#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<endl;
    cout<<"First number: "<<a<<endl;    
    cout<<"Second number: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping: "<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;
    return 0;
}