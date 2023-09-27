#include <iostream>
using namespace std;
int main(void){
    int a,b;
    char op;
    while(true){
        cin >> a >> op >> b;
        if (op == '?'){
            break;
        }
        if ( op == '+'){
            cout << (a+b) << endl;
        }
        if ( op == '-'){
            cout << (a-b) << endl;
        }
        if ( op == '*'){
            cout << (a*b) << endl;
        }
        if ( op == '/'){
            cout << (a/b) << endl;
        }
        
        
        
        
        
        
        
    }
}


