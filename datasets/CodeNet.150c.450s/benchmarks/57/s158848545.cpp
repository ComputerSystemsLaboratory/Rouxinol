#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    while (1) {
        cin >> a >> op >> b;
        
        if (op =='?') break;
        if (op == '+'){
            cout << a+b << endl;
        }else if (op == '-'){
            cout << a-b << endl;
            
        }else if(op == '*'){
            cout << a*b <<endl;
        }else{
            cout << int(a/b) <<endl;
        }
    }
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}