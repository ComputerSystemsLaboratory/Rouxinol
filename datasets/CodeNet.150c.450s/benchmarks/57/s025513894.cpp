#include <iostream>
using namespace std;

int main(void){
    
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned char op = 0;
    
    for(int i = 0; i < 20001 ; i++){
        cin >> a >> op >> b;
    
        int c = 0;
        switch(op){
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        default:
            break;
        }
        if(op == '?'){
            break;
        }
        cout << c << endl;
    }

    return 0;
}