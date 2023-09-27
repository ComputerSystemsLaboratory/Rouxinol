#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <queue>
using namespace std;
struct node
{
    char str[11];
    int t;
};
node a[100001];
int main()
{
    int n,q;
    while(scanf("%d%d",&n,&q)!=EOF)
    {
        queue<node> Q;
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i].str);
            scanf("%d",&a[i].t);
            Q.push(a[i]);
        }
        int sum=0;
        while(!Q.empty())
        {
            if(Q.front().t<=q)
            {
                sum+=Q.front().t;
                printf("%s %d\n",Q.front().str,sum);
                Q.pop();
            }
            else
            {
                Q.front().t-=q;
                sum+=q;
                Q.push(Q.front());
                Q.pop();
            }
        }
    }
    return 0;
}

