#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i , j;
    char = 'A';
    for( i  = 1 ; i<=n ; i++){
         char c = 'A';
        for( j = 1 ; j<=n-i; j++)
            cout<<"  ";
        for(j  = 1 ; j<=i ; j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}