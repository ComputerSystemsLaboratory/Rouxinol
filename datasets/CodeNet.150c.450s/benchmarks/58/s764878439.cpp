#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>

using namespace std;

char s[100];
stack<int> stk;

int main()
{
    while(scanf("%s", s) != EOF ) {
        if ( s[0] == '+' ) {
            int y = stk.top();
            stk.pop();
            int x = stk.top();
            stk.pop();
            stk.push(x + y);
        } else if ( s[0] == '-' ) {
            int y = stk.top();
            stk.pop();
            int x = stk.top();
            stk.pop();
            stk.push(x - y);
        } else if ( s[0] == '*' ) {
            int y = stk.top();
            stk.pop();
            int x = stk.top();
            stk.pop();
            stk.push(x * y);
        } else {
            int x = atoi(s);
            stk.push(x);
        }
    }

    printf("%d\n", stk.top());
    return 0;
}