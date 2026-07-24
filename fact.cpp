#include<iostream>
using namespace std;
int main()
{
    int num,i,fact;
    fact=1;
    cout<<"enter the number for factorial";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}