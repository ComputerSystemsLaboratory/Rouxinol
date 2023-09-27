#include <iostream>


using namespace std;

int main()
{
    int a, b;
    char op = 'I';
    
    while(true)
    {
        cin >> a >> op >> b;
        
        if(op == '+')
            cout << a + b << endl;
        
        else if(op == '-')
            cout << a - b << endl;
        
        else if(op == '*')
            cout << a * b << endl;
        
        else if(op == '/')
            cout << a / b << endl;
            
        else
            break;
    }

    return 0;
} 
    