#include <stdio.h>
#include <stack>
int main(void)
{
    using namespace std;
    stack<int> stk;
    int n;
    while(scanf("%d",&n)==1)
    {
        if(!n)
        {
            printf("%d\n",stk.top());
            stk.pop();
        }
        else
        {
            stk.push(n);
        }
    }
    return 0;
}