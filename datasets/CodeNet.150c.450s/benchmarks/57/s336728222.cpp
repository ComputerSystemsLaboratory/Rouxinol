#include <iostream>
using namespace std;

int main(void){
    int a, b;
    char op;
    
    while(!cin.eof()){
        cin >> a >> op >> b;
    switch(op){
        case '+':
        cout << a + b << endl;
        break;
        
        case '-':
        cout << a - b << endl;
        break;
        
        case '*':
        cout << a * b << endl;
        break;
        
        case '/':
        cout << a / b << endl;
        break;
        
        case '?':
        default:
        return 0;
    }
    }
}