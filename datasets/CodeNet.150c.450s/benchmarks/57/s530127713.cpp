#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    while (true) {
        char op;
        int a,b;
        
        cin >> a >> op >> b;
        if(op == '?'){
            break;
        }
        
        switch (op) {
            case '+':
                cout << a+b << endl;
                break;
            case '-':
                cout << a-b << endl;
                break;
            case '*':
                cout << a*b << endl;
                break;
            case '/':
                cout << a/b << endl;
                break;
            default:
                break;
        }
        
    }
    
    
    return 0;
}