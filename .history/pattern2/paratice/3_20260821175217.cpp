#include<iostream>
using namespace std;
int main(){
    for(int i = 10 ; i<=15 ; i++){
        for(int j = 10 ; j<= 10+(i-110) ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}