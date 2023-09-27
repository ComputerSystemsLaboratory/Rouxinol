#include <iostream>
#include <string>

using namespace std;

int main()
{
    while(1 == 1){
        int a,b;
    string op;
    int result;
        cin >> a >> op >> b;
    if(op == "?") break;
    if(op == "+"){
        result = a + b;
        cout << result << endl;
    }
    if(op == "-"){
        result = a - b;
        cout << result << endl;
    }
    if(op == "*"){
        result = a * b;
        cout << result << endl;
    }
    if(op == "/"){
        result = a / b;
        cout << result << endl;
    }
    }
        
}