#include <iostream>
using namespace std;

bool calculate(int& value, int a, int b, char op)
{    
    bool isFinished = true;
    switch(op)
    {
        case '+':   value = a + b;  break;
        case '-':   value = a - b;  break;
        case '*':   value = a * b;  break;
        case '/':   value = a / b;  break;
        case '?':   isFinished = false;     break;
        default:    isFinished = false;
    }
    
    return isFinished;
}

int main()
{
    int value=0;
    int a=0, b=0;
    char op;

    while(true)
    {
        cin >> a >> op >> b;
        
        if (!calculate(value, a, b, op))    break;
        
        cout << value << endl;
    }
    
    return 0;
}