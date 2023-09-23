#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    bool exit = false;
    while (!exit) {
        cin>>a>>op>>b;
        switch (op) {
        case '+': {
            cout << a+b<<endl;
            break;
        }
        case '-': {
            cout <<a-b<<endl;
            break;
        }
        case '*': {
            cout << a*b<<endl;
            break;
        }
        case '/': {
            cout<<a/b<<endl;
            break;
        }
        case '?': {
            exit = true;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}