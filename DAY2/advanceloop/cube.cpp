#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number ";
    int num;
    cin>>num;
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i * i * i;
    }
    cout<<"the sum of squares of first "<<num<<" natural numbers is "<<sum<<endl;
}