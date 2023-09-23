#include<iostream>
using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c;
    if(a > b){
        x = a;
        a = b;
        b = x;
        } 
    else{
    }     
    if(b > c){
        x = c;
        c = b;
        b = x;
        } 
    else{
    }     
    if(a > b){
        x = a;
        a = b;
        b = x;
        } 
    else{
    }     
    cout << a << " " << b << " " << c << endl;
    return 0;
}