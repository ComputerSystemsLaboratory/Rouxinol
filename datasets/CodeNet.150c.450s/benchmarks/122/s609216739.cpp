#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    char s[11];
    priority_queue<int> q;
    while(scanf("%s",s)==1)
    {
        if(s[0]=='e'&&s[1]=='n') break;
        else if(s[0]=='e')
        {
            if(!q.empty())
            {
                int x=q.top();
                q.pop();
                printf("%d\n",x);
            }
        }
        else if(s[0]=='i')
        {
            int x;
            scanf("%d",&x);
            q.push(x);
        }
    }
    return 0;
}