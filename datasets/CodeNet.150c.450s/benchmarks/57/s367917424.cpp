#include    <iostream>

using namespace std;

int main() {
    while(1) {
        int a, b;
        char op;
        cin >> a >> op >> b;

        if(op == '?') break;
        switch(op) {
            case '+':   cout << a+b << endl; break;
            case '-':   cout << a-b << endl; break;
            case '*':   cout << a*b << endl; break;
            case '/':   cout << a/b << endl; break;
            case '%':   cout << a%b << endl; break;
        }
    }
    
    return 0;
}
