#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i;
    int j;
    for( i  = 1 ; i<=n ; i++){
        for( j = 1 ; j<=n-i; j++)
            cout<<"  ";
        for(char c = 'A' ; c<='A' + (i-1) ; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}