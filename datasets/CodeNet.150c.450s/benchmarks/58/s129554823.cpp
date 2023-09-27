#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

stack<int>s;
char ch[11];

int main()
{
    while(cin>>ch)
    {
        
        if(ch[0] == '+')
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a+b);
        }
        else if(ch[0] == '-')
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b-a);
        }
        else if(ch[0] == '*')
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a*b);
        } else{
            s.push(atoi(ch));
        }
    }
    cout << s.top() << endl;
    return 0;
}

