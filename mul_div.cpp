#include<iostream>
using namespace std;

int multi()
{
    int a,b,multi;
    cout<<"enter two numbers=";
    cin>>a>>b;
    multi=a*b;
    return multi;
}

float divide()
{
    int x,y;
    float div;
    cout<<"enter two numbers=";
    cin>>x>>y;

    if(y!=0)
    {
        div=(float)x/y;
        return div;
    }
    else
    {
        cout<<"Division by zero is not possible.";
        return 0;
    }
}