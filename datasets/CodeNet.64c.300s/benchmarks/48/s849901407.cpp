#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<string>
#include<queue>
#define eps 1e-9
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;

const int n=1000000+10;
const int maxn=1000000+10;
int prime[maxn],vis[maxn];
int init()
{
    int c=0,m;
    memset(vis,0,sizeof(vis));
    m=sqrt(n+0.5);
    for(int i=2;i<=m;i++)
    {
       if(!vis[i])
       {
           for(int j=i*i;j<=n;j+=i)
              vis[j]=1;
       }
    }
    for(int i=2;i<=n;i++)
    {
        if(!vis[i])
            prime[c++]=i;
    }
    return c;
}


int main()
{
    int N;
    int k=init();
    while(~scanf("%d",&N))
    {
        int ans=upper_bound(prime,prime+k,N)-prime;
        printf("%d\n",ans);
    }
    return 0;
}