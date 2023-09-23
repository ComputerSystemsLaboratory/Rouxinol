#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int a,b;
        char op;
        cin >> a >> op >> b;

        switch(op)
        {
        case '+':
            a = a + b;
            break;
        case '-':
            a = a - b;
            break;
        case '*':
            a = a * b;
            break;
        case '/':
            a = a / b;
            break;
        default:
            return 0;
        }
        cout << a << endl;
    }
}