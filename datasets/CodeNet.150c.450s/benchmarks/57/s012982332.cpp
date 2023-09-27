#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b, c;
    string op ;
    cin >> a >> op >> b ;
    while(op != "?"){
        if(op == "+") c = a + b ;
        if(op == "-") c = a - b ;
        if(op == "*") c = a * b ;
        if(op == "/") c = a / b ;
        cout << c << endl ;
        cin >> a >> op >> b ;
    }
    return 0 ;
}
