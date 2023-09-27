#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
int a[10];
int ok;
vector <int> n;
vector <int> m;
void bfs(int cur)
{
    if(cur==10)
    {
        ok=1;
        return;
    }
    if(a[cur]>n.back())
    {
        n.push_back(a[cur]);
        bfs(cur+1);
    }
    if(a[cur]>m.back())
    {
        m.push_back(a[cur]);
        bfs(cur+1);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ok=0;
        while(!n.empty())
        {
            n.pop_back();
        }
        while(!m.empty())
        {
            m.pop_back();
        }
        n.push_back(0);
        m.push_back(0);
        for(int i=0;i<10;i++)
            scanf("%d",a+i);
            bfs(0);
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
}