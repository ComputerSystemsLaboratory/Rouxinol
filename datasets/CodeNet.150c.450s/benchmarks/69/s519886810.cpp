#include<cstdio>
#include<cstring>
using namespace std;

int a[10];
int b[10],c[10],lb,lc;
int vis[10];
int n,m,t;

bool dfs(int s,int e)
{
    int cnt = 0;
    if(s==e) return true;

    if(!lb || b[lb-1] < a[s])
    {
        cnt++;
        b[lb++] = a[s];
        if(dfs(s+1,e)) return true;
        lb--;
        b[lb] = 0;
    }
    if(!lc || c[lc-1] < a[s])
    {
        cnt++;
        c[lc++] = a[s];
        if(dfs(s+1,e)) return true;
        lc--;
        c[lc] = 0;
    }
    return false;
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
        lb = 0, lc = 0;
        if(dfs(0,10)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}