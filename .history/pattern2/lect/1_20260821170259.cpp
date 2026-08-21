#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"enter number of rows"<<endl;
    cin>>c;
    for(int i=1 ; i<=c ; i++){
        for(j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
