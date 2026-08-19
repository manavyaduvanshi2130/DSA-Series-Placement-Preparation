#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<12)
    {
        cout<<"Ticket price is $5.";
    }
    else if(age>=12 && age<=65)
    {
        cout<<"Ticket price is $10.";
    }
    else
    {
        cout<<"Ticket price is $7.";
    }
    return 0;
}