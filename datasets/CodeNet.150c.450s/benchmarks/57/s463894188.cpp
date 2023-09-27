#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    char op;
    while(true){
        cin >> a >> op >> b;
        if ( op == '?') break;
        if ( op == '+'){
            c = a + b;
        }  
        if ( op == '-' ){
            c = a - b; 
        } 
        if ( op == '*' ){
            c = a * b;        
        }
        if ( op == '/' ){
            c = a / b;
        }
        cout << c << endl;
        
    }
}

