#include <stack>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    stack<int> D;
    
    string S;
    
    while (cin >> S)
    {
        if (S == "+" || S == "-" || S == "*")
        {
            int B = D.top();
            
            D.pop();
            
            int A = D.top();
            
            D.pop();
            
            if (S == "+")
            {
                D.push(A + B);
            }
            if (S == "-")
            {
                D.push(A - B);
            }
            if (S == "*")
            {
                D.push(A * B);
            }
        }
        else
        {
            D.push(atoi(S.c_str()));
        }
    }
    
    cout << D.top() << endl;
    
    return 0;
}

