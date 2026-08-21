#include<iostream>
using namespace std;
int main(){
    int next;
    cout<<first<<endl;
    cout<<secont<<endl;
    cout<<"enter a number ";
    int num;
    cin>>num;
    for(int i=2;i<=num;i++){
        next = first + secont;
        cout<<next<<endl;
        first = secont;
        secont = next;

    }
}