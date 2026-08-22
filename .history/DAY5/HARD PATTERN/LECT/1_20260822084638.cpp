#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i  = n ; i>0 ; i--){
        for(int k = i ; k<=n-1; k++){
            cout<<" ";
        }
        for(int j = i ; j>=i-(n-1) ; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}