#include<iostream>
using namespace std;
int main(){
    for(int i = 10 ; i<=15 ; i++){
        for(int j = 1 ; j<= (i-9) ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}