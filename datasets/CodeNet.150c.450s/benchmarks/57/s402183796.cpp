#include <iostream>
using namespace std;

int calcu(int a, int b, char op)
{
    switch (op){
        case '+':
            return(a+b);
        case '-':
            return(a-b);
        case '*':
            return(a*b);
        case '/':
            if(b == 0)
                return(-1);
            return(a/b);
    }
}

int main()
{
    int a,b;
    char op;
    while(true){
        cin >> a >> op >> b;
        if(op == '?')
            break;
        cout << calcu(a,b,op) << '\n';
    }
}