#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    
    while(cin >> a >> op >> b && op != '?') {
    
        switch(op) {
        case '+': a += b; break;
        case '-': a -= b; break;
        case '*': a *= b; break;
        case '/': a /= b; break;
        default: cout << "error" << endl; return -1;
        }
        
        cout << a << endl;
    }
    
    return 0;
}
