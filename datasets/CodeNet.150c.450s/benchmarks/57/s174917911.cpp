#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a;
    int b;
    char op;

    while(cin >> a >> op >> b){
        if(op == '?')
            break;

        switch(op) {
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
        }
    }

    return 0;
}