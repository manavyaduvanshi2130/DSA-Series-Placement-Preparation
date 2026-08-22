#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int i , j;
    for(i = n ; i>= 1 ; i--){
        for(j = 0 ; j<=i-1 ; j++){
            cout<<"  ";
        }
        for(j = 1 ; j<= 2*i-1 ; j++){
            cout<<" *";
        }
        cout<<endl;
    }
}