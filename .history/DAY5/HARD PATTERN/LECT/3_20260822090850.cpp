#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i;
    int j;
    for( i  = 1 ; i<=n ; i++){
         char c = 'A';
        for( j = 1 ; j<=n-i; j++)
            cout<<"  ";
        for(char c = 'A' ; j<='A' -  ; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}