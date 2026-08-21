#include<iostream>
using namespace std;
int main(){
    int first =0;
    int secont = 1;
    int next;
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