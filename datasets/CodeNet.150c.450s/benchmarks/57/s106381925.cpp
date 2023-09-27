#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    string op;
    while (true) {
        cin >> a >> op >> b;
        if (op == "+") cout << a+b <<  endl;
        else if(op == "-") cout << a-b <<  endl;
        else if(op == "*") cout << a*b <<  endl;
        else if(op == "/") cout << a/b <<  endl;
        else if(op=="?") break;
    }
    
    return 0;
}