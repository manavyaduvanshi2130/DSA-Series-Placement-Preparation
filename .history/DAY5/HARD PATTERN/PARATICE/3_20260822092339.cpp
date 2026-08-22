#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i , j ;
    for( i  = n ; i<=n ; i++){
        for( j = 1 ; j<=n-i; j++)
            cout<<"  ";
        for(j = i ; j>=n+(i-1) ; j--)
            cout<<j<<" ";
        cout<<endl;
    }
}