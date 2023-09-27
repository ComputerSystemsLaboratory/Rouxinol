#include <bits/stdc++.h>
#define INFTY 2000000100
using namespace std;
int main()
{
    char S[8];
    int value;
    priority_queue<int> t;
    do
    {
        scanf("%s", S);
        if (S[0] == 'i')
        {
            scanf("%d", &value);
            t.push(value);
        }
        else if (S[0] == 'e' && S[1] == 'x')
        {
            printf("%d\n", t.top());
            t.pop();
        }
    } while (!(S[0] == 'e' && S[1] == 'n'));
    // for (int i = 0; i < ans.size(); ++i)
    // {
    //     printf("%d\n", ans[i]);
    // }
}
