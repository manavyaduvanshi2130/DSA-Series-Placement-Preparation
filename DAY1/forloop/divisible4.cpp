#include<iostream>
using namespace std;
int main(){
    cout<<"enter a numbr ";
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
}