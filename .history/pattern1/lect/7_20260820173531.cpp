#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    char c = 'a';
    for(row = 1; row <= 5; row++){
        for(col = 1; col <= 5; col++){
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}