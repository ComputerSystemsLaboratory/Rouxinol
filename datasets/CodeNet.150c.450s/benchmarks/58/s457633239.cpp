#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    stack<int> x;
    string s;
    while (cin >> s)
    {
        if (s == "*")
        {
            int a = x.top();
            x.pop();
            int b = x.top();
            x.pop();
            x.push(b * a);
        }
        else if (s == "+")
        {
            int a = x.top();
            x.pop();
            int b = x.top();
            x.pop();
            x.push(b + a);
        }
        else if (s == "-")
        {
            int a = x.top();
            x.pop();
            int b = x.top();
            x.pop();
            x.push(b - a);
        }
        else
        {
            int n = atoi(s.c_str());
            x.push(n);
        }
        //        cout << x.top() << endl;
    }
    cout << x.top() << endl;
    return 0;
}

